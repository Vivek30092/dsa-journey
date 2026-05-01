// WAF to check if a number is prime or not
#include<iostream>
using namespace std;

// function for prime or not
bool isPrime(int num){
    bool isPrime = true;
    for(int i = 2;i<=(num-1);i++){
        if(num%i==0){  //non prime
            isPrime = false;
            break;
        }
    }
}
int main(){
    int num;
    cout<<"enter number to check prime/nonPrime number : ";
    cin>>num;
    if(isPrime(num) == true){
        cout<<"prime number.";
    }else{
        cout<<"non prime number.";
    }
    return 0;
}