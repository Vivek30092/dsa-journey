// Sort array with 0s, 1s & 2s
// optimized approach
// TC : O(n)
#include<iostream>
#include<vector>
using namespace std;

void sortColor(vector<int> &nums, int num){
    int count0 = 0,count1 = 0,count2 = 0;
    // O(n)
    for(int i = 0; i<num; i++){
        if(nums[i] == 0) count0++;
        else if(nums[i] == 1) count1++;
        else count2++;
    }

    // O(n)
    int idx = 0;
    for(int i = 0; i<count0;i++){
        nums[idx++] = 0;
    }

    for(int i = 0; i<count1;i++){
        nums[idx++] = 1;
    }
    for(int i = 0; i<count2;i++){
        nums[idx++] = 2;
    }
    return;
}

void printValues(vector<int> &nums, int size){
    for(int val : nums){
        cout<<val<< " ";
    }
    return;
}
int main(){
    vector<int> nums = {2,0,2,1,1,0,1,2,0,0};
    int size = nums.size();
    sortColor(nums,size);
    printValues(nums,size);
    return 0;
}