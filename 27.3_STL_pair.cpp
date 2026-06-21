// Pair : part of utility lib.
#include<iostream>
using namespace std; 
int main(){
    pair<int, int> p = {1,1};
    pair<char, int> roll_num = {'V',27};

    // pair<int, pair<int, int>> test = {1,{2,3}}; 

    cout<<test.first<<endl;
    cout<<p.second<<endl;
    return 0;
}