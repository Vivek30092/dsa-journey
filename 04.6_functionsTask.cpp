// WAF tp print all prime number from 2 to N
#include <iostream>
using namespace std;

bool checkPrime(int n){
    bool isPrime = true;
    for(int i = 2; i<=(n-1); i++){
        if(n%i == 0){
            isPrime = false;
            return false;
        }
    }
}

void printPrime(int n){
    for(int i = 2; i<=n; i++){
        if(checkPrime(i) == true){
            cout<<i<<" ";
        }else{
            continue;
        }
    }
    return;
}
int main(){
    int num;
    cout<<"enter number to find all prime number in between : ";
    cin>>num;
    printPrime(num);
    return 0;
}