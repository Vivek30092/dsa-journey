// Patterns using loops
/*
1 2 3 4 5 
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
*/
#include<iostream>
using namespace std;
int main(){
    // for number
    int num ;
    cout<<"enter number to print square pattern with numbers : ";
    cin>>num;
    for(int i = 0;i<=(num-1);i++){
        for(int j = 0;j<num;j++){
            cout<<j <<" ";
        }
        cout<<endl;
    }


    // for char
    int n;
    cout<<"enter number of char you want : ";
    cin>>n;
    for(int i = 0; i<n; i++){
        char chAlpha='A';
        for(int j = 0;j<n; j++){
            cout<<chAlpha<<" ";
            chAlpha = chAlpha+1;    //using     explicit type conversion from int to char
        }
        cout<<endl;
    }
    return 0;
}