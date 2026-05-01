// calculate nCr binomial coefficient for n & r
#include<iostream>
using namespace std;

// function to calculate factorial 
int factorial(int num){
    int fact = 1;
    for(int i = 1; i<=num; i++){
        fact*=i;
    }
    return fact;
}

// function to calculate nCr
int binomialCal(int n, int r){
    int coeff;
    coeff = factorial(n)/(factorial(r)*factorial(n-r));
    return coeff;
}
int main(){
    int n,r;
    cout<<"enter value for n and r : ";
    cin>>n>>r;
    cout<<"calculated nCr value is : "<<binomialCal(n,r);
    return 0;
}