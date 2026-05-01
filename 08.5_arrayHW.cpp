// WAP to calculate sum & product of all numbers in an array
#include<iostream>
using namespace std;

int sum(int arr[],int size){
    int result = 0;
    for(int i = 0;i<size;i++){
        result+=arr[i];
    }
    return result;
}

int prod(int arr[],int size){
    int result = 1;
    for(int i = 0;i<size;i++){
        result*=arr[i];
    }
    return result;
}
int main(){
    int size;
    cout<<"enter size of array : ";
    cin>>size;
    // int arr[size];
    int *arr = new int[size];
    for(int i=0;i<size;i++){
        cout<<"enter element "<<i+1<<" of array : ";
        cin>>arr[i];
    }
    cout<<"Sum of element of your array is : "<<sum(arr,size)<<endl;
    cout<<"Product of elements of your array is : "<<prod(arr,size)<<endl;

    delete[] arr;
    return 0;
}