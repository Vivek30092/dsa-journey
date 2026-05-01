// pass the value to functoin
// in pass by value data is copied to some other location
#include<iostream>
using namespace std;

int changeX(int x){
    x = 2*x;
    cout<<"X = "<<x<<endl;  // 10
}
int main(){
    int x = 5;
    changeX(x);

    cout<<"X = "<<x<<endl; //5
    return 0;
}