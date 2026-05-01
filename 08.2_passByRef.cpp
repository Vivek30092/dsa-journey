// in array value passed to function is passed as "pass by reference"
// variable of array store the starting address of array
// when array passed to any function, it changes values of array forever.
#include<iostream>
using namespace std;

void changeArr(int arr[],int size){
    cout<<"in function\n"{
        arr[i]=2*arr[i];
    };
    for(int i=0;i<size;i++)
}
int main(){
    int arr[] ={1,2,3};
    changeArr(arr,3);

    cout<<"in main\n";
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}