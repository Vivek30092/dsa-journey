// using hashing to solve two sum problem(using maps and sets)
// Tc : o(n)
// we've to return index
/*  solution
pairSum = first + second = target(second = target - first)
after getting first value to get second we have to store value and it's index(both are int)

for fast searching of particular value then use UNORDERED_MAP<INT,INT>
UNORDERED MAP : stores key value pair, with unique key(we wil use element as key and it's index as value)

1. search complement
2. store first value(arr[i]) in map

*** VERY IMP :  in unordered_map and unordered_set, find function takes constant time to search element
*/
#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int> &arr, int tar){
    unordered_map<int,int> m;
    vector<int> ans;

    for(int i = 0; i<=arr.size(); i++){
        int first = arr[i];
        int sec = tar - first;

        if(m.find(sec) != m.end()){
            ans.push_back(i);
            ans.push_back(m[sec]);
            break;
        }
        m[first] = i;
    }
    return ans;
    
}
int main(){
    vector<int> arr = {5,2,11,7,15};
    int tar = 13;
    vector<int> ans = twoSum(arr,tar);
    for(auto e : ans){
        cout<< e << " ";
    }
    return 0;
    
}