// character array in cpp
#include<iostream>
#include <cstring>
using namespace std;
int main(){
    // char arrays = C strings
    char str[] = {'v','i','v','e','k','\0'};
    char str1[] = "Golu";

    cout<<str1[3]<<endl;
    cout<<strlen(str)<<endl;        //constant pointers

    // input into char array
    char str2[100];
    cout<<"Enter char array: ";
    // cin>>str;                        //won't take input after space or new line
    cin.getline(str2,10,'$');            //$ sign is delimiter here 
    cout<<"output: "<<str2<<endl;
    return 0;
}