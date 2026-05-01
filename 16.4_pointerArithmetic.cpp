
#include<iostream>
using namespace std;
int main(){
    // Increment(++)/Decrement(--) : size incr. or decr. by size of pointer based on datatype
    int a = 10;
    int *ptr = &a;
    cout<<ptr<<endl;
    ptr++;      //size of int is 4
    cout<<ptr<<endl;

    // add/subtract number
    cout<<ptr+1<<endl;      //add 4bite of storage space
    cout<<ptr-1<<endl;      //1int = 4B


    // using it for array
    int arr[] = {1,2,3,4,5};
    cout<<*arr<<endl;   //return 1(first value of array)
    cout<<*(arr+1)<<endl;   //second value of array
    cout<<*(arr+2)<<endl;   //third value of array
    cout<<*(arr+3)<<endl;   //fourth value of array
    cout<<*(arr+4)<<endl;   //fifth value of array


    // subtract ptr
    // we can't add pointers but can subtract them and they must be of same type
    // gives no. of blocks of type in between two pointers
    int *ptr1;
    int *ptr2=ptr1+5;   //20 bits ahead of ptr1
    cout<<"no. of blocks in between are : "<<ptr2-ptr1<<endl;



    // compare pointers(<,<=,>,>=,==,!=)
    cout<<(ptr1>ptr2)<<endl;
    cout<<(ptr1!=ptr2)<<endl;
    cout<<(ptr1==ptr2)<<endl;
    cout<<(ptr1<ptr2)<<endl;
    


    return 0;
}