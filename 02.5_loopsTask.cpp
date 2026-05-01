// sum of all odd number from 1 to N
// sum of number from 1 to n.
#include<iostream>
using namespace std;
int main(){
    int oddSum = 0,num;
    int evenSum = 0;
    cout<<"enter number till you want sum of odd number starting from 1 : ";
    cin>>num;
    for(int i = 1;i<=num;i++){
        if(i%2!=0){
        oddSum+=i;
        }else{
            evenSum+=i;
        }
    }
    cout<<"sum of odd number between 1 and "<<num<<" is : "<<oddSum;
    cout<<"\nsum of even number between 1 and "<<num<<" is : "<<evenSum;

    return 0;

}