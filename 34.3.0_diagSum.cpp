/* return diagonal sum = (sum of primary + secondary diagonal)
no. of rows = no. of cols
*/ 
#include<iostream>
using namespace std;

int diagSum(int matrix[][4], int rows, int cols){
    int sum, priDiag, SecDiag;
    priDiag = 0;
    SecDiag = 0;
    for(int i = 0; i<rows; i++){
        for(int j = 0; j<cols; j++){
            if(i==j)
                priDiag += matrix[i][j];
            else(j==n-ip1)}
        }
    }
    
    return sum;
}
int main(){
    int matrix[4][4] = {
        {1,2,3,4},
        {5,6,8,9},
        {10,11,12,13},
        {14,15,16,17}};
    int rows = 4;
    int cols = 4;
    cout<<diagSum(matrix, rows, cols);
    return 0;
}