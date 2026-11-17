// fibonacci by recursion(nth fibonacci term?)
/* TC: geometric progration [(a(r^n - 1))/(r-1)] 
final : O(n^2) [exponential] golden ration(O(1.618^n))
*/
// SC: depth of RT * memory ocupied O(n)
#include<iostream>
using namespace std;

int fibonacci(int n){

    // base cases
    if(n==1 || n == 0) return n;

    return fibonacci(n-1) + fibonacci(n-2);
}
int main(){
    int num = 6;
    cout<<fibonacci(num);
    return 0;
}