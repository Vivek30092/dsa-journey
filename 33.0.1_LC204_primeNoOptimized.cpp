/*      Sieve of Eratosthenes(optimized way to find prime in range)
coutn prime in range(total count of prime number less than N) 
I. assume all number as a prime 
II. remove all those number which are divisible by first element(2) then move to next element
III. do same as above for(3)
*/
#include<iostream>
#include<vector>
using namespace std; 
int main(){
    int n;
    cout<<"Enter value of n: ";
    cin>>n;
    vector<bool> isPrime(n+1, true);
    int count = 0;

    for(int i = 2; i<=n; i++){
        if(isPrime[i]){
            count++;
            for(int j = i*2; j<=n; j += i ){
                isPrime[j] = false;
            }
        }
    }
    cout<<count;
    return 0;
}