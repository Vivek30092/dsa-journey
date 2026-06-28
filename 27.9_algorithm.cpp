#include<iostream>
#include <algorithm>
using namespace std;
int main(){
    // sorting algorithm
    int arr[5] = {30,14,99, 24, 5};
    sort(arr,arr+5);
    for(auto val: arr){
        cout<<val<<" ";
    }
    cout<<endl;
    // arr+n : because above function does't include last value so we pass last of (array + 1: out of the array) value index
}