// Arithmetic Progression
//  a=1 ; d=n2-n1;
//  a(n-1)d
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    for (int i = 1; i <= 2 * n - 1; i += 2)
    {
        cout << i << endl;
    }
}