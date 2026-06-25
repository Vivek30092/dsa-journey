// stores key(unique)-value pairs
// returns data in sorted order
// words in O(logN) time(self balance tree)

// other types of map are
// 1. multimap : stores multiple keys(duplicate)
// 2. unordered map: keeps data unordered : TC: O(1)
#include<iostream>
#include<map>
using namespace std;
int main(){
    map<string,string> m;

    // to insert and change
    m["AL231027"] = "Vivek";
    m["AL231015"] = "Himanshu";

    m.insert({"AL231026","Vijay"});
    m.emplace("AL231018", "Man");           //without creating object

    // count: return number of keys
    cout<<m.count("AL231027")<<endl;

    for(auto val : m){      //will print values in asc order
        cout<<val.first<<" "<<val.second<<endl;
    }

    m.erase("AL231026");
    cout<<"after erase: "<<endl;
    for(auto val : m){      //will print values in asc order
        cout<<val.first<<" "<<val.second<<endl;
    }

    // find(): returns iterator
    if(m.find("AL231027") != m.end()){
        cout<<"Found\n";
    }else{
        cout<<"not found\n";
    }
    return 0;
}