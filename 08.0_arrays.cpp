// block of data
// resolve problem of multiple variable
// stores same type of data
// contiguous in memory and it's linear
#include<iostream>
using namespace std;
int main(){
    // array initialization
    int marks[5]={13,44,55,81,99};
    
    int priceSize = 5;
    float price[priceSize];
    marks[2] = 65;
    int size = sizeof(marks)/sizeof(marks[0]);
    for(int i = 0;i < size;i++){
        cout<<marks[i]<<endl;
    }
    for(int j = 0;j<priceSize;j++){
        cout<<"enter price of item "<<j+1<<" : ";
        cin>>price[j];
    }
    


    
}