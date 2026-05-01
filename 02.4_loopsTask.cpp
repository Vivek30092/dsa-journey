// sum of number from 1 to n.
#include<iostream>
using namespace std;
int main(){
    int sum = 0,num;
    cout<<"enter number till you want sum starting from 1 : ";
    cin>>num;
    for(int i = 1;i<=num;i++){
        sum+=i;
        if(i>=50){
            cout<<"number is too longer so breaking loop...\nbut we will count for atleast 50 as...\n";
            break;
        }
    }
    cout<<"sum of number is : "<<sum;

    return 0;

}