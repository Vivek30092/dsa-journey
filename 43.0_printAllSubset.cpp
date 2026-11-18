// BACKTRACKING
// print all subsets of given array
// total no. of element in subset of size n array = 2^n 

// TC: total calls * word done in each call
// O(2^n * n) * O(1)

#include<iostream>
#include<vector>
using namespace std;

void printSubsets(vector<int> &arr, vector<int> &ans, int i){   // ans passing by ref
    if(i == arr.size()){
        for(int val : ans){
            cout<<val<< " ";
        }
        cout<<endl;
        return; 
    }

    // include
    ans.push_back(arr[i]);
    printSubsets(arr,ans, i+1);

    ans.pop_back();     //backtrack
    // exclude
    printSubsets(arr, ans, i+1);
}
int main(){
    vector<int> arr = {1,2,3};
    vector<int> ans; //store subsets

    printSubsets(arr,ans,0);
    return 0;
}