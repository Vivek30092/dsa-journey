// decimal to binary number
#include<iostream>
using namespace std;

int decToBinary(int decimal){
    int ans = 0, pow = 1;
    while(decimal>0){
        int rem = decimal%2;
        decimal /= 2;
        ans += (rem*pow);
        pow *= 10;
    }
    return ans;
}
int main(){
    int decimal;
    cout<<"enter decimal number : ";
    cin>>decimal;
    cout<<decimal<<"'s binary is : "<<decToBinary(decimal);    
    return 0;
}