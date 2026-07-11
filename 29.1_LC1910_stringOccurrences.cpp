
#include<string>
#include<iostream>
using namespace std; 

string removeOccurrences(string s, string part){
    while(s.length()>0 && s.find(part)<s.length()){
        s.erase(s.find(part),part.size());
    }
    return s;
}


int main(){
    string str;
    string part;
    cout<<"Enter string containing occurrences: ";
    getline(cin,str);
    cout<<"Enter part to remove occurrences: ";
    getline(cin,part);
    cout<<removeOccurrences(str,part)<<endl;
    return 0;
}