#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int count = 0;
    int a = n;
    int sum = 0;
    int lastdigit = 0;
    while (n > 0)
    {

        lastdigit = n % 10;
        sum = sum + lastdigit;
        n /= 10;
        // count++;
    }

    if (a == 0)
        cout << 1;
    else
        cout << sum;
}