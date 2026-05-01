// insertion sort
#include<iostream>
using namespace std;

void insertionSort(int arr[], int n){
    
}

void printArray(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n = 7;
    int arr[] = {2,4,51,1,5,2,65};

    insertionSort(arr,n);
    printArray(arr,n);
    return 0;

}