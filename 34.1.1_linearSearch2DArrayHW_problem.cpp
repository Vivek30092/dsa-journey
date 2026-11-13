// HW : return pair (row, cols) if key found in matrix else return (-1,-1)
#include<iostream>
#include<utility>
using namespace std;

pair<int,int> linearSearch(int matrix[][3],int rows, int cols, int key){
    for(int i = 0; i<rows; i++){
        for(int j = 0; j<cols; j++){
            if(matrix[i][j] == key){
                return make_pair(i,j);
            }
        }
    }
    return make_pair(-1,-1);
}
int main(){
    int matrix[4][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9},
        {10,11,12}};
    int rows = 4;
    int cols = 3;

    pair<int, int> ans = linearSearch(matrix, 4,3,14);
    cout<< ans.first<<" "<<ans.second<<endl;
    return 0;
}