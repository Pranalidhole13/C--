#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter side of traiangle: ";
    cin >> a >> b >> c;
    if (a + b > c && b + c > a && c + a > b)
    {
        cout << a << "," << b << "," << c << " are sides of triangle";
    }
    else
    {
        cout << "Not sides of triangle";
    }
}