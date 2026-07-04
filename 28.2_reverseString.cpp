// reverse a string
#include<iostream>
#include<string>
#include <algorithm>
using namespace std;
int main(){
// 1. for char array
    char arr[5] = {'v','i','v','e','k'};
    int n = sizeof(arr);
    int st = 0, end = n-1;
    while(st<end){
        swap(arr[st],arr[end]);
        st++,end--;
    }
    for(auto ch:arr){
        cout<<ch;
    }
    cout<<endl;
    // cout<<arr;
// 2. for string
    string str = "Vivek Kuamar Choudhary";
    reverse(str.begin(),str.end());      //returns iterators
    cout<<str<<endl;
    return 0;
}