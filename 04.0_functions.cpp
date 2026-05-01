// functions in cpp
#include<iostream>
using namespace std;

void printHW(){
    cout<<"Hello World!\n";
}

int sum(int n1, int n2){
    return n1+n2;
}
int main(){
    printHW();
    cout<<"sum of -50 and -25 is : "<<sum(-50,-25);
    return 0;
}