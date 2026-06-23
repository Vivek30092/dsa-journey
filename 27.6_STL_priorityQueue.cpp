// uses maxheap or minheap: both are complete binary tree
// internally it's binary tree
#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int> q;          //for maxheadp

    // priority_queue<int, vector<int>,greater<int>> q;        //for minheap
    // above (greater) is functor(function object) or comparator

    q.push(2);
    q.push(3);
    q.push(10);
    q.push(4);

    while(!q.empty()){
        cout<<q.top()<<" ";
        q.pop();
    }
    cout<<endl;


    priority_queue<int, vector<int>,greater<int>> q;        //for minheap
    // above (greater) is functor(function object) or comparator
    return 0;
}