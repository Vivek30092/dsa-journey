// reverse given array
#include<iostream>
using namespace std;

void reverseArray(int arr[],int size){
    int start = 0;
    int end = size-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main(){
    int size,start = 0,end = size-1;
    cout<<"enter size of array : ";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cout<<"enter array element "<<i+1<<". : ";
        cin>>arr[i];
    }

    cout<<"before reverse : ";
    for(int j = 0;j<size;j++){
        cout<<arr[j]<<" ";
    }
    reverseArray(arr,size);
    cout<<"\nafter reverse : ";
    for(int k = 0;k<size;k++){
        cout<<arr[k]<<" ";
    }
    return 0;
}