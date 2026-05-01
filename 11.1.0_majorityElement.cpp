// return majority element of array[element appears more than n/2 times]
// using bruteForce approach
// time complexity of sorted array : O(n^2)
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec = {2,2,1,1,1,2,2};
    int size = vec.size();
    for(int val : vec){
        int count = 0;
        for(int el : vec){
            if(val == el){
                count++;
            }
        }
        if(count>size/2){
            return val;
        }        
    }
    return -1;
};