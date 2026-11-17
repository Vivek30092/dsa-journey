// function calling itself
// base case: last point where function stops calling itself
// recursion <==> loops

/* 
call stack: store info related to function
*/
// recurrence relation(mathematical way to represent our recursion and it helps in analyzing TIME COMPLEXITY)
/*
f(n) = print(n) + f(n-1)
TC: O(1) + TC(n-1) 
*/
#include<iostream>
using namespace std;

void printNum(int num){

    // base case
    if(num == 1){
        cout<<1;
        return;
    }

    cout<<num<<" ";
    printNum(num-1);
}
int main(){
    int num = 14;
    printNum(num);
    return 0;
}