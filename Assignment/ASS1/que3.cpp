// int ==> integer takes 2 or 4 bytes depends on compiler

// bool ==> Boolean takes 2 byte

// float ==> float takes 4 bytes

#include <iostream>
using namespace std;
int main()
{
    cout << "Size of int is " << sizeof(int) << endl;
    cout << "Size of bool is " << sizeof(bool) << endl;
    cout << "Size of float is " << sizeof(float) << endl;
}