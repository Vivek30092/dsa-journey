#include<iostream>
using namespace std;

// void changeA(int a){    //pass by value
//     a=20; 
// }

void changeA(int &b){   //pass by reference usign alias here '&' is symbol of alias not address
    b=20;
}
// void changeA(int* ptr){  //pass by reference using pointers
//     *ptr = 20;
// }


int main(){
    int a = 10;
    // changeA(&a);    //for pass by reference
    changeA(a);     //for alias
    cout<<"Inside main fnc : "<<a<<endl; // print 10 bcz it's pass by val
    return 0;
}