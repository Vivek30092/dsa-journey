/*          BruteForce Approach(prime number in range)
    Logic to check if given number is prime or not
    for N : divide N with each number from 2 to underoot(N)
    if it gets divided then it's not prime number.
*/ 
#include<iostream>
using namespace std;

string checkPrime(int number){
    if(number < 2)
        return "Non Prime Number.";
    for(int i = 2; i*i<=number; i++){        //start from 2
        if(number%i==0)
            return "Non Prime Number.";
    }
    return "Prime Number.";
}

int main(){ 
    int startRange, endRange;
    cout<<"Enter a number for Start Range: ";
    cin>>startRange;
    cout<<"Enter a number for end Range: ";
    cin>>endRange;
    
    if(startRange<0)
        startRange = 0;
    if(endRange<0 || startRange>endRange){
        cout<<"Invalid Range";
        return 0;
    }
        
    for(int i = startRange; i<=endRange; i++){
        cout<<i<<" is "<<checkPrime(i)<<endl;
    }
    
    return 0;
}