// bitwise operator(&)
#include<iostream>
using namespace std;
int main(){
    // bitwise and[&]
    int a = 4, b = 8;
    cout<<"bitwise and : "<<(a&b)<<endl;  //bitwise and 
    cout<<(6&10)<<endl;

    // bitwise OR [|]
    cout<<"bitwise or : "<<(4|8)<<endl;
    cout<<(6|10)<<endl;


    // bitwise XOR[^]
    /*
    0 --> for same bits
    1 --> for different bits
    */
    cout<<"---bitwise operations---"<<endl;
    cout<<(4^8)<<endl;
    cout<<(3^4)<<endl;
    cout<<(6^10)<<endl;


    // bitwise leftShift[<<]
    /*n<<i  n shifts i places left*/
    // it's answer is [a<<b = a*(2^b)]

    cout<<"for leftShift : "<<(4<<1)<<endl;
    cout<<"for leftShift : "<<(10<<2)<<endl;


    // bitwise rightShift[>>]  
    // it's answer is [a<<b = a/(2^b)]
    cout<<"for rightshift : "<<(10>>1)<<endl;


    return 0;
}