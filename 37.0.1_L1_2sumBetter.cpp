// better approach to solve two sum proble
// TC : O(nlogn)
#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target){
    sort(nums.begin(),nums.end());
    int st = 0, end = nums.size()-1;
    while(st<end){
        int ans = nums[st] + nums[end];
        if(ans != target){
            if(ans>target){
                end--;
            }else{
                st++;
            }
        }else
            return {st,end};   
    }
    return {-1,-1};
}

int main(){
    vector<int> nums ={2,7,11,15};
    int target = 9;
    vector<int> ans = twoSum(nums,target);
    for(auto val: ans){
        cout<<val<<" ";
    }
    return 0;
}