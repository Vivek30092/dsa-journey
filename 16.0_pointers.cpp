// special variables that store address of other variable
// & --> address of Operator
// * --> value at address (dereference operator)
#include<iostream>
using namespace std; 
int main(){
    int a = 10;
    int *ptr = &a;
    int **ptr2 = &ptr;
    cout<<ptr<<endl;
    cout<<&a<<endl;
    cout<<&ptr<<endl;
    cout<<ptr2<<endl;
    cout<<*(&a)<<endl;
    cout<<*(ptr)<<endl;
    cout<<*(ptr2)<<endl;
    cout<<**(ptr2)<<endl;
    // float price = 14.30;
    // float *priceF = &price;
    // cout<<priceF<<endl;
    // cout<<&price<<endl;
    return 0;
}