/* LC240: Search a 2D Matrix II
    conditions:
    1. int in each row are sorted in ASC from left to right
    2. int in each clm are sorted in ASC from top to bottom
*/
/* 
here rows are overlapping in terms of range.
// TC : O(N+M)
*/
#include<iostream>
#include<vector>
using namespace std; 

bool searchMatrix(vector<vector<int>> mat, int target){
    int m = mat.size();     //no. of rows
    int n = mat[0].size();      //no. of cols

    int r = 0, c = n-1;

    while(r < m && c >= 0){
        if(target == mat[r][c]){
            return true;
        }else if(target < mat[r][c]){
            c--;
        }else{
            r++;
        }
    }
    return false;
}
int main(){
    vector<vector<int>> matrix = {
        {1,4,7,11,15},
        {2,5,8,12,19},
        {3,6,9,16,22},
        {10,13,14,17,24},
        {18,21,23,26,30}
    };
    int target = 25;
    cout<<searchMatrix(matrix, target);
    return 0;
}