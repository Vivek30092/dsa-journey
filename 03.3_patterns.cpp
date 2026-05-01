// Triangle pattern
/*
1 
1 2
1 2 3
1 2 3 4
*/
#include<iostream>
using namespace std;
int main(){
    int num = 4;
    for(int i = 0; i<num; i++){
        for(int j = 0; j<(i+1);j++){
            cout<<(j+1)<<" ";
        }
        cout<<endl;
    }
    return 0;
}