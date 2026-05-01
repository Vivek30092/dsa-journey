// find char lowercase or uppercase
#include<iostream>
using namespace std;
int main(){
    // one way
    char ch;
    cout<<"enter char : ";
    cin>>ch;
    if(ch>='a' && ch<='z'){
        cout<<"lowercase";
    }else if (ch>='A' && ch<='z')
    {
        cout<<"UPPERCASE";
    }else{
        cout<<"invalid input";
    }

    // second way using implisit type conversion
    if(ch>=97 && ch<=(97+26)){
        cout<<"lowercase";
    }else if (ch>=65 && ch<=(65+26))
    {
        cout<<"UPPERCASE";
    }else{
        cout<<"invalid input";
    }
    return 0;
}