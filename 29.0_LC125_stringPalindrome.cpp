// find if a string is palindrome
// using 2 pointers approach
// TC: O(n)
#include<iostream>
#include<string>
#include<vector>
using namespace std;

bool isPalindrome(string s){
    int st = 0, end = s.size()-1;
    while(st<end){
        if(!isalnum(s[st])){
            st++;continue;
        }
        if(!isalnum(s[end])){
            end--;continue;
        }
        if(tolower(s[st]) != tolower(s[end])){
            return false;
        }
        st++;end--;
    }
    return true;
}
using namespace std;

int main(){
    string phrase;
    cout<<"Enter string: ";
    getline(cin,phrase);
    string final = (isPalindrome(phrase) == 1) ? "Palindrome" : "not Palindrome";
    cout<<final<<endl;
    return 0;
}