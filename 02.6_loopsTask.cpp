// check if a number is prime or not
#include<iostream>
using namespace std;
int main(){
    // check weather given number is prime or not
    int num;
    cout<<"enter number to check isPrime : ";
    cin>>num;
    bool isPrime = true;
    for(int i = 2;i<=(num-1);i++){
    // for(int i = 2;i*i<=num;i++){     //little optimization
    // run loop from 2 to underroot of num
        if(num%i==0){  //non prime
            isPrime = false;
            break;
        }
    }
    if(isPrime == true){
        cout<<"prime number.";
    }else{
        cout<<"non prime number";
    }
    // prime number between given number
}