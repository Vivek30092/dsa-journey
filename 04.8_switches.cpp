// self learning : switches
#include<iostream>
using namespace std;
int main(){
    char ch;
    int num1, num2;

    cout<<"enter num1 : ";
    cin>>num1;
    cout<<"enter num2 : ";
    cin>>num2;
    cout<<"choose operation(+,-,*,/,%) : ";
    cin>>ch;
    
    switch (ch)
    {
    case '+':
        cout<<"addition : "<<(num1+num2);
        break;

    case '-':
        cout<<"subtraction : "<<(num1-num2);
        break;

    case '*':
        cout<<"multiplication : "<<(num1*num2);
        break;

    case '/':
        if(num2==0){
            cout<<"denominator can't be zero."; 
        }else{
            cout<<"division : "<<(num1/num2);
        }break;

    case '%':
        if(num2==0){
            cout<<"denominator can't be zero."; 
        }else{
            cout<<"modulus : "<<(num1%num2);
        }break;
    
    default:
        cout<<"invalid operation";
        break;
    }
    return 0;
}