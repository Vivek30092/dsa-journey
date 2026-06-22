// Pair : part of utility lib.
#include<iostream>
#include<vector>
using namespace std; 
int main(){
    pair<int, int> p = {1,1};
    pair<char, int> roll_num = {'V',27};
    cout<<p.first<<endl;
    cout<<p.second<<endl;

    // pair<int, pair<int, int>> test = {1,{2,3}}; 
    // cout<<test.second.first<<endl;

    // Vector in pair
    vector<pair<int, int>> vec = {{1,1},{2,4},{3,9},{4,16}};
    // for(pair<int, int> digit: vec){  //can be written as below line
    for(auto digit : vec){
        cout<<digit.first<< " "<< digit.second<<endl;
    } 
    vec.push_back({5,25});      //insert at the end
    vec.emplace_back(6,36);     //in-place objects create



    return 0;
}