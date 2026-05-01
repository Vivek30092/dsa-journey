// factorial of N
#include<iostream>
using namespace std;

// defined function
int fact(int num){
    int fact = 1;
    for(int i = 1; i<=num;i++){
        fact*=i;
    }
    return fact;
}
int main(){
    cout<<"fact of 5 : "<<fact(5);
    cout<<"\nfact of 3 : "<<fact(3);
    cout<<"\nfact of 10 : "<<fact(10);
    cout<<"\nfact of 9 : "<<fact(9);

    return 0;
}