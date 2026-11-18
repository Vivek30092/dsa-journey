// LC78: subsets(return power set)
// TC: O(n * 2^n)
#include<iostream>
#include<vector>
using namespace std;

void getAllSubsets(vector<int> &nums,vector<int> ans, int i, vector<vector<int>> &allSubsets){
    if(i == nums.size()){
        // store subsets;
        allSubsets.push_back({ans});
        return;
    }
    // include
    ans.push_back(nums[i]);
    getAllSubsets(nums, ans, i+1, allSubsets);
    
    ans.pop_back();

    // exclude
    getAllSubsets(nums, ans , i+1, allSubsets);
}

vector<vector<int>> subsets(vector<int> &nums){
    vector<vector<int>> allSubsets;
    vector<int> ans;

    getAllSubsets(nums, ans, 0, allSubsets);

    return allSubsets;
}
int main(){
    vector<int> nums = {1,2,3};
    vector<vector<int>> pwrSet = subsets(nums);

    for(int i = 0; i<pwrSet.size(); i++){
        cout<<"{ ";
        for(int j = 0; j<pwrSet[i].size(); j++){
            cout<<pwrSet[i][j]<<", ";
        }
        cout<<"}, ";
    }
    return 0; 
    
}