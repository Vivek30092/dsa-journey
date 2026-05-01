// leetCode problem 238(product of Array except self)
// using brute force approach
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr = {1,2,3,4};
    vector<int> newarr;
    for(int i = 0; i<arr.size(); i++){
        int ans = 1,digit = 0;
        for(int j = 0; j<arr.size(); j++){
            i == j ? digit = 1 : digit = arr[j];
            ans *= digit;
        }
        newarr.push_back(ans);
    }
        for(int val : newarr){
            cout<<val<<" ";
        }
    return 0;
}