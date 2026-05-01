// find smallest and largest in array
#include<iostream>
#include <climits>
using namespace std;

int smallest(int array[],int size){
    int small = INT_MAX;
    int smallIndex = -1;
    for(int i=0;i<size;i++){
        // if(array[i]<small){
            // small = array[i];
            // }
        small = min(array[i],small);
        smallIndex = i;
    }
    return smallIndex;
}

int largest(int array[],int size){
    int large = INT_MIN;
    int largeIndex = -1;
    for(int i=0;i<size;i++){
        if(array[i]>large){
            large = array[i];
            largeIndex = i;
        }
    }
    return largeIndex;
}
int main(){
    int size;
    cout<<"enter size of array : ";
    cin>>size;
    int array[size];
    for(int i=0;i<size;i++){
        cout<<"enter element "<<i+1<<" of array : ";
        cin>>array[i];
    }
    int largestIndex = largest(array,size);
    int smallestIndex = smallest(array,size);
    cout<<"largest element of array is "<<array[largestIndex]<<"at index " <<largestIndex<<endl;
    cout<<"smallest element of array is "<<array[smallestIndex]<<"at index " <<smallestIndex<<endl;
}