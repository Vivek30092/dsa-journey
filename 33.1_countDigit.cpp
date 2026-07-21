// count number of digits in given number
#include<iostream>
#include <cmath>
using namespace std;
int main(){
    long long n ;
    cin>>n;
    cout<<(int)(log10(n)+1)<<endl;
    return 0;
}