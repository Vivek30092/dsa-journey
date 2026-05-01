// calculate sum of digits of a number
#include<iostream>
using namespace std;

// function to find sum of digit 
int digitSum(int n){
    int sum = 0;
    int digit = 0;
    while(n>0){
        digit = n%10;
        n/=10;
        sum+=digit; 
    }
    return sum;
}

// main function
int main(){
    int num;
    cout<<"enter number to get sum of digits : ";
    cin>>num;
    int result = digitSum(num);
    cout<<"sum of digits are : "<<result;
    return 0;
}

