// Strings in C++
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "Vivek";       //dynamic because gets resize at runtime
    cout<<str<<endl;
    cout<<str.length()<<endl;
    
    // input string
    cout<<"Enter string: ";
    // cin>>str;
    getline(cin,str);
    cout<<"output: "<<str<<endl;
    for(auto ch:str){
        cout<<ch<<" ";
    }
    cout<<endl;
    return 0;
}