// given sorted array
// using 2 pointer approach
// time complexity : O(n)
#include<iostream>
#include<vector>
using namespace std;

vector<int> pairSum(vector<int> vec,int n,int target){
    int i=0,j=n-1;
    vector<int> result;
    while(i<j){
        int pairSum = vec[i]+vec[j];
        if(pairSum < target){
            i++;
        }else if(pairSum > target){
            j--;
        }else{
            result.push_back(i);
            result.push_back(j);
            return result;
        }
    }
    return result;
}

int main(){
    vector<int> vec = {2,7,11,15};
    int target = 9;
    int n = vec.size();
    vector<int> ans = pairSum(vec,n,target);
    for(int x : ans){
        cout<<x<<" ";
    }    
    return 0;
}