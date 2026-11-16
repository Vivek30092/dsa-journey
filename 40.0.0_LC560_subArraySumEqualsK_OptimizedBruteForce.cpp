// LC560: subarray sum equals k
// given array and target
// return count or no. of subarrays whose sum is equal to target
// optimized brute force approach : check the sum of all the subarray and return count of those whose sum is equal to target
// TC : (n^2)
// SC : (1)

#include<iostream>
#include<vector>
using namespace std;
int subarraySum(vector<int> &nums, int target){
    int n = nums.size();
    int count = 0;

    for(int i = 0; i<n; i++){   //starting point    
        int sum = 0;
        for(int j = i; j<n; j++){   //ending point
            sum += nums[j];
            if(sum==target) count++;
        }    
    }    
    return count;
}

int main(){
    vector<int> arr = {9,4,20,3,10,5};
    int target = 33;

    cout<<subarraySum(arr,target);
    return 0;
}