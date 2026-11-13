// LC1 : 2Sum problem
// TC : O(n*m)
#include<iostream>
#include<vector>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target){
    for(int i = 0; i<nums.size();i++){
        for(int j = i+1; j<nums.size(); j++){
            if(target == nums[i] + nums[j]){
                return {i,j};
            }
        }
    }
    return {-1,-1};    //if there's no valid ans available     
}

int main(){
    vector<int> nums ={2,7,11,15,4,8,1,10};
    int target = 0;
    vector<int> ans = twoSum(nums,target);
    for(auto val: ans){
        cout<<val<<" ";
    }
    return 0;
}