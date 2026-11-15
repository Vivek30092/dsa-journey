// LC1 : 2Sum problem
// TC : O(n*m)
// "hashing(using sets and maps)"
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
    vector<int> nums ={5,2,11,7,15};
    int target = 9;
    vector<int> ans = twoSum(nums,target);
    for(auto val: ans){
        cout<<val<<" ";
    }
    return 0;
}