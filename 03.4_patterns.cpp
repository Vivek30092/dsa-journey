// Reverse triangle pattern
/*
1 
2 1
3 2 1
4 3 2 1
*/
#include<iostream>
using namespace std;
int main(){
    int num = 4;
    // logic by me for digits
    for(int i = 0; i<num; i++){
        for(int j = (i+1); j>0; j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
    // logic by instructor
    // as it is :)
    return 0;
}