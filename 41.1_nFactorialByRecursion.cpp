// N Factorial with recursion
/*
TC: 
1. using recurrence relation
f(n) = k + f(n-1)
O(N)

2. total no. of recursion call * work done in each calls
O(n)

// SC: depth of recursion tree * memory in each all
OR
height of call stack * memory in each call
O(n)
*/
#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0){       //base case
        return 1;
    }
    return n * factorial(n-1);
}

int main(){
    int n = 5;
    cout<<factorial(n);
    
    return 0;
}