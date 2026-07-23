// to check if number is armstrong or not
#include<cmath>
#include<iostream>
using namespace std;

string isArmstrong(int number){
    int sum = 0;
    int copyN = number;
    int power = (int)(log10(number)+1);
    while(number>0){
        int currDigit = number % 10;
        sum += (int)round(pow(currDigit, power));
        number /= 10;
        // cout<<currDigit<<'\t'<<sum<<endl;           //used for testing
    }
    // cout<<sum<<'\t'<<copyN<<endl;            //used for testing code
    if(sum==copyN)
        return "Armstrong Number";
    else
        return "Not Armstrong Number";
    
}

int main(){
    int n;
    cout<<"Enter number: ";
    cin>> n;
    cout<<isArmstrong(n)<<endl;
    return 0;
}