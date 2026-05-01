// linear search using vector
#include<iostream>
#include<vector>
using namespace std;
int findValue(vector<int> &vec,int element){
    bool status = false;
    for(int val : vec){
        if(element == val){
            status = true;
            break;
        }
    }
    return status;
}
int main(){
    int size;
    cout<<"Enter size of Vector : ";
    cin>>size;
    vector<int> vec(size);
    for(int i = 0;i<size;i++){
        cout<<"Enter element "<<i+1<<" : ";
        cin>>vec[i];        
    }

    // ask what element to search
    int element;
    cout<<"\nenter element to search : ";
    cin>>element;

    if(findValue(vec,element)==1){
        cout<<"Element found.";
    }else{
        cout<<"Element not found.";
    }

    
    return 0;
}

