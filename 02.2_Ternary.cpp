// Ternary statements
// syntex : conditon ? stt1:stt2
#include <iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter your age: ";
    cin>>age;
    cout<<(age>=18?"yeah dude...Congrats.\nyou can drink :)" : "ohh...Sorry.\nu can't drink :(");
    return 0;
}