// Volume of Cylinder is = pi*r*r*h

#include <iostream>
using namespace std;
int main()
{
    float radius, height, pi;
    pi = 3.14;
    cout << "Enter radius and height for cylinder: ";
    cin >> radius >> height;
    float volume = pi * radius * radius * height;
    cout << "Volume of Cylinder is : " << volume;
}