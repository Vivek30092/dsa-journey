// WAP to swap the max & min number of an array
#include<iostream>
#include<climits>
using namespace std;

void swapMinMax(int arr[], int size){
    int maxIndex = 0;
    int minIndex = 0;
    for(int i = 1; i < size; i++){
        if(arr[i] > arr[maxIndex]){
            maxIndex = i;
        }
        if(arr[i] < arr[minIndex]){
            minIndex = i;
        }
    }
    // swap
    int temp = arr[maxIndex];
    arr[maxIndex] = arr[minIndex];
    arr[minIndex] = temp;
}

int main(){
    int size;

    cout << "Enter size of array: ";
    cin >> size;

    int *arr = new int[size];

    for(int i = 0; i < size; i++){
        cout << "Enter element " << i+1 << ": ";
        cin >> arr[i];
    }

    swapMinMax(arr, size);

    cout << "\nArray after swapping min and max:\n";

    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }

    delete[] arr;
    return 0;
}