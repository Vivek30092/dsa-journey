// figure out how to find if a number is power of 2 without any loop(bitwise operation)
// 01. by using loop
/*
Keep dividing the number by 2 until:
It becomes 1 → it is a power of 2
It becomes odd (and not 1) → it is not a power of 2
*/
// #include<iostream>
// using namespace std;
// bool isPowerofTwo(int n){
//     if(n<=0){
//         return false;
//     }
//     while (n % 2 == 0){
//         n=n/2;
//     }
//     return(n==1);
    
// }
// int main(){
//     int n = 16;
//     if(isPowerofTwo(n)){
//         cout<<"Power of 2.";
//     }else
//     cout<<"Not power of 2.";
// }

// 02. by using bitwise operator
#include <iostream>
using namespace std;

bool isPowerOfTwo(int n) {
    return (n > 0) && ((n & (n - 1)) == 0);
}

int main() {
    int n = 16;

    if (isPowerOfTwo(n))
        cout << "Power of 2";
    else
        cout << "Not a Power of 2";

    return 0;
}