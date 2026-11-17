// sum of N nums with recursion
// SC: O(n)
// TC:  
#include<iostream>
using namespace std;
int sumOfN(int n){
    if(n == 1){
        return 1;
    }
    return n + sumOfN(n-1);
}
int main(){
    int num = 5;
    cout<<sumOfN(num);
    return 0;
}