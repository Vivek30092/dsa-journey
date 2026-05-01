#include <iostream>
using namespace std;
int main(){
    // for number
    cout<<"pattern for digits...\n";
    int num;
    num = 3;
    int digit = 1;
    for(int i = 0;i<num;i++){
        for(int j = 0;j<num;j++){
            cout<<digit<<" ";
            digit +=1;
        }
        cout<<endl;
    }

    cout<<"\n\npattern for char... \n";

    // for char
    char ch = 'A';
    for(int i = 0;i<num;i++){
        for(int j = 0; j<num; j++){
            cout<<ch<<" ";
            ch +=1;
        }
        cout<<endl;
    }
    return 0;
}