// conditional statements and loops
#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter any real number : ";
    cin>>num;
    if(num>0)
    {
        cout<<"number you entered is positive.";
    }else if (num<0)
    {
        cout<<"number you entered is negative.";
    }else{
        cout<<"you entered zero.";
    }

    // check odd-even
    if(num%2==0){
        cout<<" and it's even...";
    }else{
        cout<<" and it's odd...";
    }
}