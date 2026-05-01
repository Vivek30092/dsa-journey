// WAP to reverse an integer n
#include <iostream>
using namespace std;
int main() {
    int n, reversed = 0, remainder;

    cout << "Enter an integer: ";
    cin >> n;

    while (n != 0) {
        remainder = n % 10;              // extract last digit
        reversed = reversed * 10 + remainder; // add digit to reversed number
        n = n / 10;                      // remove last digit
    }

    cout << "Reversed number = " << reversed;

    return 0;
}
