// array are pointes and it's constant pointer(once saved it's value can't be changed throughout the program...)
#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};

    cout<<arr<<endl;        //gives address
    cout<<*arr<<endl;       //gives value at address of first element
    return 0;
}