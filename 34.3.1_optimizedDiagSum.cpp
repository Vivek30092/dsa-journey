/* return diagonal sum = (sum of primary + secondary diagonal)
no. of rows = no. of cols
TC: O(n)
*/ 
#include<iostream>
using namespace std;

int diagSum(int matrix[][4], int rows, int cols){
    int sum = 0;
    int n = rows;

    //pd = j = i
    //sd = j = n-i-1 (n: no. of rows/cols)

    for(int i = 0; i<n; i++ ){
        sum += matrix[i][i];

        if(i != n-i-1){
            sum += matrix[i][n-i-1];
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
    cout<<diagSum(matrix, 4, 4);
    return 0;
}