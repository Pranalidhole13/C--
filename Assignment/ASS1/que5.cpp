// Find the circumference of the circle

#include <iostream>
using namespace std;
int main()
{
    float radius;
    float pi = 3.14;
    cout << "enter the radius";
    cin >> radius;
    float circumference = 2 * pi * radius;
    cout << "The circumference of the circle is : " << circumference;
}