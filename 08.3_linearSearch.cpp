// Linear search algorithm
#include<iostream>
using namespace std;

int linearSearch(int arr[],int size,int element){
    for(int i=0;i<size;i++){
        if(arr[i]==element){
            return i;
        }
    }
    return -1;
}
int main(){
    int size,element;
    cout<<"enter required size of array : ";
    cin>>size;
    int arr[size];
    for(int i = 0;i<size;i++){
        cout<<"enter array element "<<i+1<<" : ";
        cin>>arr[i];
    }
    cout<<"enter element to search in array : ";
    cin >>element;
    int currentIndex = linearSearch(arr,size,element);
    if( currentIndex == -1){
        cout<<"element not found";
    }else{
        cout<<"element found at : "<<currentIndex ;
    }
    return 0;
}