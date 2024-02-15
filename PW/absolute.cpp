// Print absolute value of that integer
//  |9| = 9 and |-9| = 9

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n > 0)
    {
        cout << n;
    }
    else // n<=0
    {
        cout << -n;
    }
}
