// list (container)
// internally implemented as doubly linked list
#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l;
    // list<int> l = {1,2,3,14,30}
    l.push_back(1);
    l.push_back(2);
    l.push_front(0);
    l.push_front(14);
    l.emplace_back(30);

    l.pop_back();
    l.pop_front();

    for(int val : l){
        cout<< val <<" ";
    }
    cout<<endl;
    return 0;
    }