// Maximum row sum
// return row whose sum is maximum
#include<iostream>
#include <climits>
using namespace std; 
int maxSum(int matrix[][4], int rows, int cols){
    int maxRowSum = INT_MIN;
    for(int i = 0; i<rows; i++){
        int currSum = 0;
        for(int j = 0; j< cols; j++){
            currSum += matrix[i][j];
        }
        maxRowSum = max(maxRowSum, currSum);
    }
    return maxRowSum;
}

int main(){
    int matrix[4][4] = {
        {1,2,3,4},
        {5,6,8,9},
        {10,11,12,13},
        {14,15,16,17}};
    int rows = 4;
    int cols = 4;
    cout<<maxSum(matrix, rows, cols);
    return 0;
}