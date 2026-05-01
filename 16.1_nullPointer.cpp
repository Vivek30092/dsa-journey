// NULL pointer : that doesn't point to any location
#include<iostream>
using namespace std; 
int main(){
    int *ptr = NULL;   // give 0 shows null pointer
    // int *ptr;     //always store some garbage value
    cout<<ptr<<endl;
    cout<<*ptr<<endl;   //may give segmentation fault error
    return 0;
}