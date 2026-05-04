// Sort array with 0s, 1s & 2s
// optimized approach
#include<iostream>
#include<vector>
using namespace std;

void sortColor(vector<int> arr, int num){
    int count0,count1,count2 = 0;
    for(int i = 0; i<num; i++){
        if(arr[i] == 0) count0++;
        else if(arr[i] == 1) count1++;
        else if(arr[i] == 2) count2++;
        else{
            cout<<"invalid input";
        }
    }
    return;
}

void printValues(vector<int> arr, int size){
    for(int val : arr){
        cout<<val<< " ";
    }
    return;
}
int main(){
    vector<int> arr = {2,0,2,1,1,0,1,2,0,0};
    int size = arr.size();
    sortColor(arr,size);
    printValues(arr,size);
    return 0;
}