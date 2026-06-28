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

    // lower_bound() : returns just greater number than specified if specified number not found
    // value should not be less than key
    cout<<"Lower bound: "<<*(s.lower_bound(4))<<endl;        //using dereference
    // because 4 is present in set so it return 4 otherwise it will return just greater value than number
    // cout<<*(s.lower_bound(4))<<endl;   //(5 will be output)     //using dereference
    // if no value is equal to or greater than specified value in set then it will return s.end() value(no valid answer[0])


    // upper_bound()
    // value should be greater than key NOT EVEN EQUAL
    cout<<"upper bound: "<<*(s.upper_bound(4))<<endl;       //(5 as output) no. should be greater than key 



    // some other types of sets
/*
multi set: stores multiple values, keeps duplicate elements
multiset<int> s;

unordered set: keeps element in unorder when print
unordered_set<int> s;
*/
    return 0;
}
