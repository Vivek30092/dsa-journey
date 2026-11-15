// based on hasing
// LC37 : find duplicate number 
// SOLVING USING UNORDERED_SET
// TC : O(N) and space complexity : O(N)(due to unordered_set)
// but we needed to solve it in constant extra space
/*
array contain int in range [1,n] inclusive
contain only one repeated number and return that number
*/
#include<iostream>
#include<vector>
#include <unordered_set>
using namespace std;

int findDuplicate(vector<int> &nums){
    int ans;
    unordered_set<int> s;
    for(int val : nums){
        if(s.find(nums[val]) != s.end()){
            return nums[val];
        }
        s.insert(nums[val]);
    }
    return -1;

}
int main(){
    vector<int> nums = {3,1,3,4,2};
    cout<<findDuplicate(nums);
    return 0;
}