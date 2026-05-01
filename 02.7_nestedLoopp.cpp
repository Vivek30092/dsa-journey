// nested loops
#include<iostream>
using namespace std;
int main(){
    int stars = 5;
    int line = 5;
    for(int i = 0;i<=stars;i++){
            for(int j = 0;j<=line;j++){
                cout<<"#";
            }
            cout<<"\n";
    }
    
    return 0;


}