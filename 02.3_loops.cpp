// loops
#include<iostream>
using namespace std;
int main(){

    // while loop
    int count = 1;
    while(count<=5){
        cout<<count<<" ";
        count++;
    }


    // for loop
    cout<<"\nOutput of for loop\n";
    for(int i = 10;i>=count;i--){
        cout<<i<<" ";
    }


    // do-while
    int doWhile = 5;
    do{
        cout<<"\ni do work atleast once";
        doWhile--;
    }while(doWhile>=0);
    return 0;

}