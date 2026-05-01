// inverted triangle pattern
/*
1 1 1 1 
 2 2 2
  3 3
   4
*/
#include<iostream>
using namespace std;
int main(){
    int num = 4;
    for(int i = 0; i<num; i++){
        // spaces
        for(int j = 0; j<i; j++){
            cout<<" ";
        }
        // nums
        for(int j = 0; j<num-i;j++){
            cout<<(i+1)<<" ";
        }
        cout<<endl;
    }
    return 0;
}