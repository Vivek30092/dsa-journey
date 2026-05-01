// print factorial of a number N.
#include<iostream>
using namespace std;
int main(){
    int num,factorialN = 1;
    cout<<"enter number to find factorial : ";
    cin>> num;
    for(int i = 1;i<=num;i++){
        cout<<i<<" X ";
        factorialN*=i;
    }
    cout<<" = "<<factorialN; 
    return 0;
}