// WAF to print nth Fibonacci
#include<iostream>
using namespace std;
int fibonacci(int num){
    int nextNum;
    int zerothTerm = 0;
    int firstTerm = 1;
    for(int i = 2; i<= num; i++){
        nextNum = zerothTerm + firstTerm;  
        zerothTerm = firstTerm;             
        firstTerm = nextNum;                
    }
    return nextNum;
    // cout<<nextNum;
}
int main(){
    int num;
    cout<<"enter number to find nth fibonacci number : ";
    cin>>num;
    cout<<"\n"<<num<<"th fibonacci number is : "<<fibonacci(num);
    return 0;
}