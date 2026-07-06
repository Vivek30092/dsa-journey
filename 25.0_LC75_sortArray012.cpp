// sort array with 0s, 1s & 2s
// using brute force
// TC : O(nlogn)
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> arr = {1,1,2,2,0,2,1,0};
    sort(arr.begin(),arr.end());

    for(int val : arr){
        cout<<val<<" ";
    }
    return 0;
}