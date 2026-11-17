// recursive binary search return position of element in arr
// binary search can be applied only on sorted data 

// TC: O(logN)
// SC: O(logN)
#include<iostream>
#include<vector>
using namespace std;

// helper function
int binSearch(vector<int> arr, int tar, int st, int end){
    if(st<end){
        int mid = st + (end-st)/2;

        if(arr[mid] == tar) return mid;
        else if(arr[mid] <= tar){
            return binSearch(arr,tar,mid+1,end);
        }else{
            return binSearch(arr,tar,st,mid-1);
        }
    }
    return -1;
}

int search(vector<int> arr, int tar){
    return binSearch(arr,tar,0,arr.size()-1);
}

int main(){
    vector<int> arr = {-1,0,3,5,9,12};
    int target = 9;
    cout<<search(arr,target);
    return 0;
}