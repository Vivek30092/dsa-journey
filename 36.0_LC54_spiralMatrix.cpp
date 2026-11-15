// LC54 : spiral matrix
/*

top -> right -> bottom -> left
no element repeat
travel on each cell of matrix
*/

// corner case of problem (for odd size)
/* when top and bottom or right and left become equal then element will get printed repeatedly
to handle this "break" the loop for bottom and left boundary
*/
#include<iostream>
#include<vector>
using namespace std; 

vector<int> spiralOrder(vector<vector<int>> &matrix){
    int m = matrix.size(), n = matrix[0].size();
    int srow = 0, scol = 0, erow = m-1, ecol = n-1;
    vector<int> ans;
    while(srow <= erow && scol <= ecol){
        // condition for while
        /*
        when srow > erow then elements will starts to repeat, which is not required condition
        same for scol and ecol
        */

        // top
        for(int j = scol; j<=ecol; j++){
            ans.push_back(matrix[srow][j]);
        }

        // right
        for(int i = srow + 1; i<= erow; i++){
            ans.push_back(matrix[i][ecol]);
        }

        // bottom
        for(int j = ecol - 1; j >= scol; j--){
            if(srow==erow){         //handling corner case for odd size matrix
                break;
            }
            ans.push_back(matrix[erow][j]);
        }

        // left
        for(int i = erow - 1; i >=srow+1; i--){
            if(scol == ecol){       //handling corner case for odd size matrix
                break;
            }
            ans.push_back(matrix[i][scol]);
        }

        srow++,erow--, scol++, ecol--;
    }
    return ans; 
}


int main(){
    vector<vector<int>> mat = {
        {1,2,3,89},
        {4,5,6,78},
        {7,8,9,67}
    };
    vector<int> ans = spiralOrder(mat);
    for(auto e : ans){
        cout<<e<< " ";
    }
    return 0;
}