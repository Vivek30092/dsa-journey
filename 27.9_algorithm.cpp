#include<iostream>
#include <algorithm>
using namespace std;
int main(){
    // sorting algorithm
    int arr[5] = {30,14,99, 24, 5};
    sort(arr,arr+5);
    cout<<"ASC order: ";
    for(auto val: arr){
        cout<<val<<" ";
    }
    cout<<endl;
    // arr+n : because above function does't include last value so we pass last of (array + 1: out of the array) value index


    
    // to sort in DESC order
    sort(arr,arr+5,greater<int>());          //third parameter is a functor/comparator(function which tell the logic of comparison)
    cout<<"DESC order: ";
    for(auto val: arr){
        cout<<val<<" ";
    }
    cout<<endl;
}