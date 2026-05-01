// binary search using recursion
#include<iostream>
#include<vector>
using namespace std;

int recBinarySearch(vector<int> arr, int tar,int st,int  end){
    if(st<=end){
        int mid = st + (end-st)/2;

        if(tar>arr[mid]) {      //2nd half
            return recBinarySearch(arr, tar, mid+1,end);
        }else if(tar<arr[mid]){    //1st half
            return recBinarySearch(arr, tar, st, mid-1);
        }else{      //mid => ans
            return mid;
        }
    }
    return -1;
}
int main(){
    vector<int> arr = {-1,0,3,5,9,12};
    int tar = 3;
    cout<<recBinarySearch(arr, tar,0,arr.size()-1);
    return 0;

}