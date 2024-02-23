// Geometric progession
// a*r^n-1;
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter number";
    cin >> n;
    int a = 1;
    for (int i = 1; i <= n; i++)
    {
        cout << a << endl;
        a = a * 2;
    }
}