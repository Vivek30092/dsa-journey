// finding majority element(greater than n/2) and not necessary that element exist
// Moore's voting algorithm
// time complexity : O(n)

#include<iostream>
#include<vector>
using namespace std;

int majorityElement(vector<int> &nums){
    int freq = 0, ans = 0;

    for(int i = 0;i<nums.size();i++){
        if(freq==0){
            ans = nums[i];
        }
        if(ans==nums[i]){
            freq++;
        }else{
            freq--;
        }
    }
    int count = 0;
    for(int val : nums){
        if(val == ans){
            count++;
        }
    }
    if(count>nums.size()/2){
        return count;
    }
    else{
        return -1;
    }
    return ans;
};
int main(){
    vector<int> nums = {1,2,2,1,1};
    if(majorityElement(nums) == -1){
        cout<<"Hay no element major...";
    }else{
        cout<<"hay element major";
    }
    return 0;
}