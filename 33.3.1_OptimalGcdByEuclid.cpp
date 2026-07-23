// to find GCD of two number using optimal approach
// using Euclid's Algorithm
#include<iostream>
using namespace std;

int getGCD(int num1, int num2){
    while(num1>0 && num2>0){
        if(num1>num2){
            num1 %= num2;
        }else{
            num2 %= num1;
        }
    }
    if(num1==0) return num2;
    return num1;
}

// using recursion

// int gcdRec(int a, int b){
//     if(b==0) return a;

//     return gcdRec(b,a&b);
// }


int main(){
    int n1, n2;
    cout<<"Enter number 1: ";
    cin>>n1;
    cout<<"Enter number 2: ";
    cin>>n2;
    cout<<"GCD/HCF is: "<<getGCD(n1, n2);
    return 0;
}