// code to find LCM(Least/Lowest common multiplier)
/*
num1*num2 = gcd(num1,num2) * lcm(num1,num2);

lcm(num1,num2) = (num1,num2)/gcd(num1,num2))
*/
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


int main(){
    int num1 = 20;
    int num2 = 28;
    int lcm = (num1*num2)/getGCD(num1,num2);
    cout<<"LCM: "<<lcm;
    return 0;
}