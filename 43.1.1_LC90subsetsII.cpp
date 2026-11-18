// LC90: subsetsII
/* PS : here array may contain duplicates, return all possible subsets(power set)
solution set must not contain duplicate subsets, return the solution in ay order.
*/
// TC: O(2^n)
#include<iostream>
#include<vector>
#include <algorithm>
using namespace std; 

void getAllSubset(vector<int> &nums, vector<int> &ans, int i , vector<vector<int>> allSubsets){
    if(i    == nums.size()){
        allSubsets.push_back(ans);
        return;
    } 

    // include
    ans.push_back(nums[i]);
    getAllSubset(nums, ans, i+1, allSubsets);

    ans.pop_back();

    int idx = i+1;
    while(idx < nums.size() && nums[idx] == nums[idx-1]) idx++;

    //exclude
    getAllSubset(nums,ans, idx, allSubsets);
}

vector<vector<int>> subsetWithDup(vector<int> &nums){
    sort(nums.begin(),nums.end());
    vector<vector<int>> allSubsets;
    vector<int> ans; 

    getAllSubset(nums, ans, 0, allSubsets);
    return allSubsets;

}
int main(){
    vector<int> nums = {1,2,2};
    vector<vector<int>> pwrSet = subsetWithDup(nums);

    for(int i = 0; i<pwrSet.size(); i++){
        cout<<"{ ";
        for(int j = 0; j<pwrSet[i].size(); j++){
            cout<<pwrSet[i][j]<<", ";
        }
        cout<<"}, ";
    }

    return 0;
}