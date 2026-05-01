// leetCode problem 238(product of Array except self)
// optimized space complexity along with space complexity[O(n)]
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums = {1,2,3,4};
    int n = nums.size();
    vector<int> ans(n,1);
    
    // prefix
    for(int i = 1; i<n; i++){
        ans[i] = ans[i-1] * nums[i-1];
    }

    //prefix
    int suffix = 1;
    for(int i = n-2; i>=0; i--){
        suffix *= nums[i+1];
        ans[i] *= suffix;
    }
    for(int val : ans){
        cout<<val<<" ";
    }
    return 0;
}