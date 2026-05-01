// rotated sorted array
// leetCode problem 33
// ascending order, distinct values
// TC : O(logN) 
#include<iostream>
#include<vector>
using namespace std;

int binSearch(vector<int> arr, int tar){
    int st = 0,end = arr.size()-1;
    while(st<=end){
        int mid = st + (end-st)/2;  

        if(arr[mid] == tar){
            return  mid;
        }

        if(arr[st]<=arr[mid]){      //left sort
            if(arr[st]<=tar && tar<=arr[mid]){
                end = mid-1;
            }else{
                st = mid+1;
            }
        }else{                      //right sort
            if(arr[mid]<=tar && tar<=arr[end]){
                st = mid+1;
            }else{
                end = mid-1;
            }
        }
    }
    return -1;
}
int main(){
    vector<int> arr = {3,4,5,6,7,0,1,2};
    int tar = 0;

    cout<<binSearch(arr,tar);

    return 0;
}
