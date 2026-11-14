// LC74: Search in a 2D Matrix

/*  conditions
1. each row is sorted in non-decreasing order.
2. the first int of each row is greater than the last int of the previous row.
required TC : O(log(m*n)) (used by binary search : O(log(n)))
O(logM * logN) = O(log(M*N))
*/

/*  solution
// only one or unique row will contain result(non-overlapping row)
row : range[start, end] (each row's range will be unique and it's non-overlapping)

1. search correct row(binary search on rows)
        mid = s + ((e-s)/2)
2. after getting appropriate row apply binary search on it
*/

#include<iostream>
#include<vector>
using namespace std; 

bool searchInRow(vector<vector<int>> &matrix, int target, int row){//O(logN)
    int n = matrix[0].size();   //no. of columns, no need of no. of rows
    int st = 0, end = n-1;

    while(st<=end){
        int mid = st+(end - st)/2;
        if(target == matrix[row][mid]){
            return true;
        }else if(target > matrix[row][mid]){
            st = mid + 1;
        }else{
            end = mid-1;
        }
    }
    return false;
}

bool searchMatrix(vector<vector<int>> &matrix, int target){//O(logM)
    // BS on total rows
    int m = matrix.size();       //no. of rows
    int n = matrix[0].size();       //no. of columns
    int startRow = 0, endRow = m-1;
    while(startRow <= endRow){
        int midRow = startRow + (endRow-startRow)/2; 

        if(target >= matrix[midRow][0] && target <= matrix[midRow][n-1]){
            // found the row, apply binary on it
            return searchInRow(matrix, target, midRow);

        }else if(target >= matrix[midRow][n-1]){
            // down <=> right
            startRow = midRow + 1;
        }else{
            // up <=> left
            endRow = midRow-1;
        }
    }
    return false;
}
int main(){
    vector<vector<int>> mat{
        {11,13,15,18},
        {18,18,20,31},
        {32,33,34,54}
    };
    int target = 11;
    cout<<searchMatrix(mat, target);
    return 0;   
}