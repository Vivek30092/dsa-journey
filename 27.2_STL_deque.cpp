// deque (container)
// internally implemented as double ended queue with the help of dynamic arrays
// random access is possible
#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> d = {1,2,3,4,5,6};

    for (int val : d){
        cout<< val<< " ";
    }
    cout<<endl;
    cout<<d[2] <<endl;
    // also support size, erase, clear, begin, end, rbegin, rend, insert, front, back
    return 0;
    }