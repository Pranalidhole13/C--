// Reverse a digit
#include <iostream>
using namespace std;
int main()
{
    int n, lastDigit, reverse;
    cout << "Enter a Number";
    cin >> n;
    lastDigit = 0;
    reverse = 0;
    while (n > 0)
    {
        reverse *= 10;
        lastDigit = n % 10;
        reverse = reverse + lastDigit;
        n /= 10;
    }
    cout << reverse;
}