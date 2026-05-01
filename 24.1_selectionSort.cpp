// Selection sort algorithm
// TC :
#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void selectionSort(int arr[], int n){       //O(n^2)
    for(int i = 0; i<n-1; i++){
        int smallestInx = i;        //first element of unsorted array
        for(int j = i+1; j<n; j++){
            if(arr[j] < arr[smallestInx]){
                smallestInx = j;
            }
        }
        swap(arr[i], arr[smallestInx]);
    }
}
int main(){
    int n = 6;
    int arr[] = {1,5,9,14,3,2};

    selectionSort(arr,n);
    printArray(arr,n); 
    return 0;
}