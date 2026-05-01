// same as array it just has dynamic size 
// use vectors from STL - Std. Template Library
/*
vector<int> vec;
vector<int> vec={1,2,3}
vector<int> vec(1[size],2[value at each index]);
vector<int> v(n);   // create vector of size n
*/
#include<iostream>
#include<vector> 
using namespace std;
int main(){
    vector<int> vec = {1,2,3};
    cout<<vec[0]<<endl;
    vector<int> vec1(3,0);
    for(int vals : vec){        //for each loop
        cout<<vals<<endl;
    }
    vector<char> cVec = {'a','b','c','d','v'};
    for(char val : cVec){
        cout<<val<<endl;
    }
    return 0;
}