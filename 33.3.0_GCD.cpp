// GCD or HCF of given two number
#include<iostream>
using namespace std;

int getGCD(int num1, int num2){
    int gcd = 1;
    // int min = (num1>num2) ? num2 : num1;

    // base cases, if num1 == num2 or any one is equal to o
    if((num1 == 0 || num2 == 0) || num1== num2){
        gcd = max(num1,num2);
        return gcd;
    }
    for(int i = 2; i<=min(num1,num2);i++){
        if(num1%i==0 && num2%i==0){
            gcd = i;
        }
    }
    return gcd;
}
int main(){
    int n1, n2;
    cout<<"Enter number 1: ";
    cin>>n1;
    cout<<"Enter number 2: ";
    cin>>n2;
    cout<<"GCD/HCF is: "<<getGCD(n1, n2);
    return 0;
}