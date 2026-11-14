// LC74 : Search in a 2D matrix(with 2 conditions)
    // 1. Each row is sorted in non-decreasing order.
    // 2. the first int of each row is greater than the last int of the previous row.
// brute force approach
// using linear search
// TC : O(n*n)
#include<iostream>
using namespace std;

bool matSearch2D(int mat[][4], int row, int col, int key){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(mat[i][j] == key){
                return true;
            }
        }
    }
    return false; 
}

int main(){
    int mat[3][4] = {
        {1,3,5,7},
        {10,11,16,20},
        {23,30,34,60}
    };
    int row = 3;
    int col = 4;
    int key = 13;
    cout<<matSearch2D(mat,row,col,key)<<endl;


    return 0;
}