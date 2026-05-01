// return majority element of array[element appears more than n/2 times]
// using optimize approach using sorting
// time complexity of sorted array : O(nlogn)
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int majorityElement(vector<int>& nums) {
        int n = nums.size();

        // sort
        sort(nums.begin(),nums.end());

        // freq count
        int freq = 1, ans = nums[0];
        for(int i = 1; i<n ;i++){
            if(nums[i]==nums[i-1]){
                freq++;
            }
            else{
                freq = 1;
                ans = nums[i];
            }
            if(freq>n/2){
                return nums[i];
            }
        }
        return ans;
    }
int main(){
    vector<int> nums={3,3,2,2,2};
    cout<<majorityElement(nums);
    return 0;
};