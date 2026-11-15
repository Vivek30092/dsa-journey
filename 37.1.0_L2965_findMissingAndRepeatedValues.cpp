// LC: 2965, Find missing and repeated values
// TC: O(n^2)
// return pair of {a,b}, where a = repeating and b = missing value in range of 1 to n^2

/* using sets and maps
for repeating value use UNORDERED_SET

*/
#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

vector<int> findMissingAndRepeatedValue(vector<vector<int>> &grid){
    vector<int> ans; 
    unordered_set<int> s;
    int n = grid.size();
    int a, b;

    int expSum = 0, actualSum = 0;

    // to find repeating value(a)
    // b = expectedSum + a - actualSum
    for(int i = 0; i< n; i++){      //O(n^2)
        for(int j = 0; j<n; j++){
            actualSum += grid[i][j];

            if(s.find(grid[i][j]) != s.end()){      // does element already exist?
                a = grid[i][j];
                ans.push_back(a);

            }
            s.insert(grid[i][j]);                   // if element not found then insert that in unordered set
        }
    }
    expSum  = (n*n) * (n*n + 1)/2;
    b = expSum + a - actualSum;
    ans.push_back(b);
    return ans;
}

int main(){
    vector<vector<int>> grid = {
        {9,1,7},
        {8,9,2},
        {3,4,6}
    };  
    vector<int> ans = findMissingAndRepeatedValue(grid);
    for(auto element : ans){
        cout<<element<<" ";
    }
    return 0;
}