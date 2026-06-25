// internally uses self balancing tree
// TC: O(logN)
#include<set>
#include<iostream>
using namespace std;
int main(){
    set<int> s;

    s.insert(1);
    s.insert(2);
    s.insert(2);
    s.insert(3);
    s.insert(5);
    s.insert(4);


    cout<<"Size = "<<s.size()<<endl;
    for(auto val: s){
        cout<<val<<" ";
    }
    cout<<endl;

    // lower_bound()
    return 0;
}
