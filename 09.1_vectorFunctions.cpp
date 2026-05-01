// function used for vector
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> iVec = {1,2,3,4,5,6,7,14,30,9};
    vector<char> cVec = {'v','i','e','k','a','d','y'};

    // size function
    cout<<"size : "<<iVec.size()<<endl;

    // push function(at back)
    cVec.push_back('u');
    cVec.push_back('z');

    // delete function(from end)
    cVec.pop_back();

    // front : print first element of vector
    cout<<cVec.front()<<endl;

    // back : return back value
    cout<<cVec.back()<<endl;

    // at : access value at particular index
    cout<<cVec.at(6)<<endl;
    cout<<"size of cVec : "<<cVec.size()<<endl;
    cout<<"capacity of cVec : "<<cVec.capacity()<<endl;
    

}