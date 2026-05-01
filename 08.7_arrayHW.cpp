// WAP to print all the unique values in an array
#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter size of array : ";
    cin>>size;

    int *arr = new int[size];

    for(int i = 0; i < size; i++){
        cout<<"Enter array element "<<i+1<<" : ";
        cin>>arr[i];
    }

    cout<<"\nUnique elements are:\n";

    for(int i = 0; i < size; i++){
        int count = 0;
        for(int j = 0; j < size; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count == 1){
            cout<<arr[i]<<" ";
        }
    }
    delete[] arr;
    return 0;
}