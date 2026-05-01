// sum of all numbers from 1 to N which are divisible by 3.
#include <iostream>
using namespace std;
int main(){
    int num,threeSum = 0;
    cout<<"enter number to find sum of number divisible by 3 in between 1 and entered number : ";
    cin>>num;
    for(int i = 1;i<=num;i++){
        if(i%3 == 0){
            threeSum +=i;
        }
    }
    cout<<"sum of numbers divisible by 3 in between 1 and "<<num<<" is : "<<threeSum;

    return 0;



}