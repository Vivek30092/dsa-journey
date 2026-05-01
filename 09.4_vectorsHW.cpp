// reverse vector using function
#include<iostream>
#include<vector>
using namespace std;
void reverseVec(vector<int> &vec){
    int startIndx = 0;
    int endIndx = vec.size()-1;
    while(startIndx<endIndx){
        swap(vec[startIndx],vec[endIndx]);
        startIndx++;
        endIndx--;
    }
}

int main(){
    int size;
    cout<<"enter size of vector : ";
    cin>>size;
    vector<int> vec(size);

    for(int i = 0; i < size; i++){
        cout<<"Enter vector element "<<i+1<<" : ";
        cin>>vec[i];
    }

    cout<<"\nVector before swapping : ";
    for(int val : vec){
        cout<<val<<" ";
    }
    reverseVec(vec);

    cout<<"\nVector after swapping : ";
    for(int val : vec){
        cout<<val<<" ";
    }
    return 0;
}