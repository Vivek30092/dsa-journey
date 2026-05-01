// tc : O(logN)
// works only on sorted array(monotonous,monotonic function : always inc. or dec. function)
// concept : 
    // 1. find mid
    // 1.1 if tar>arr[mid] : 2nd half
    // 1.1.1 str = mid+1
    // 1.2 if tar<arr[mid] : 1st half
    // 1.2.1 end = mid-1
    // 1.3 if tar == mid : ans

    // 1st half = (str to mid-1)
    // 2nd half = (mid+1 to end)
#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> arr,int tar){
    int st = 0 ,end = arr.size()-1;
    while(st<=end){
        // int mid = (st+end)/2;       //condition of overflow may arrise
        // to escape condition of overflow we use another formula for mid
        int mid = st + (end-st)/2;

        if(tar>arr[mid]){
            st = mid+1;
        }else if (tar<arr[mid]){
            end = mid-1;
        }else{
            return mid;
        }
    }
    return -1;
}
int main(){
    vector<int> arr1 = {-1,0,3,4,5,9,12};   //ODD
    int tar1 = 4;
    // cout<<binarySearch(arr1,tar1);

    vector<int> arr2 = {-1,0,3,5,9,12};     //even
    int tar2 = 0;
    cout<<binarySearch(arr2,tar2);
    return 0;
}