// triangle pattern
/*
*/
#include<iostream>
using namespace std;
int main(){
    // for stars
    int num = 4;
    for(int i = 0; i<num; i++){
        for(int j = 0;j<i+1;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }


    // for numbers
    /*
    1
    2 2
    3 3 3
    4 4 4 4*/
    for(int i = 0; i<num; i++){
        for(int j = 0;j<i+1;j++){
            cout<<i+1<<" ";
        }
        cout<<endl;
    }

    // for char
    /*
    A
    B B
    C C C
    D D D D
    */
    char ch = 'A';
    for(int i=0;i<num;i++){
        for(int j = 0; j<i+1;j++){
            cout<<ch<<" ";
        }
        ch+=1;
        cout<<endl;
    }
    return 0;
}