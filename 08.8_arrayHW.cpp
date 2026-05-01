// WAP to print intersection of 2 arrays
#include <iostream>
using namespace std;
int main(){
    int size1, size2;
    cout<<"Enter size of first array: ";
    cin>>size1;
    int *arr1 = new int[size1];
    for(int i = 0;i<=size1;i++){
        cout<<"enter element "<<i+1<<" : ";
        cin>>arr1[i];
    }

    cout<<"Enter size of second array: ";
    cin>>size2;

    int *arr2 = new int[size2];

    for(int i = 0;i<size2;i++){
        cout<<"enter element "<<i+1<<" : ";
        cin>>arr2[i];
    }

    cout<<"\nIntersection element are : ";
    for(int i = 0; i<size1; i++){
        for(int j = 0; j<size2; j++){
            if(arr1[i]==arr2[j]){
                cout<<arr1[i]<<" ";
                break;
            }
        }
    }

    delete[] arr1;
    delete[] arr2;
    return 0;
}