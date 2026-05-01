// Floyd's triangle pattern
/*
1 
2 3
4 5 6
7 8 9 10
*/
#include<iostream>
using namespace std;
int main(){
    // digit version
    int num = 4;
    int start = 1;
    for(int i = 0;i<num;i++){
        for(int j = 1;j<=(i+1);j++){
            cout<<start<<" ";
            start++;
        }
        cout<<endl;
    }

    // char version
    char firstCh = 'A';
    for(int i = 0;i<num;i++){
        for(int j = 1; j<=(i+1);j++){
            cout<<firstCh<<" ";
            firstCh++;
        }
        cout<<endl;
    }
    return 0;
}