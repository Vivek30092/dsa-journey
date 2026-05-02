// insertion sort
#include<iostream>
using namespace std;

void insertionSort(int arr[], int n){           //O(n^2)
    for(int i = 1; i<n; i++){               //traverse unsorted array
        int curr = arr[i];
        int prev = i-1;

        // while(prev >=0 && arr[prev] > curr){    //for ascending
        while(prev >=0 && arr[prev] < curr){    // for descending

            arr[prev+1] = arr[prev];
            prev--;
        }

        arr[prev+1] = curr; //placing the curr el in its correct position
    }
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