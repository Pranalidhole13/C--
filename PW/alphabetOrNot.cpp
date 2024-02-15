// Write a program to check whether given character is alphabet or not

#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter the character";
    cin >> ch;
    int ascii = (int)ch;
    if ((ch >= 97 && ch <= 122) || (ch >= 65 && ch <= 90))
    {
        cout << "Given character is an alphabet";
    }
    else
    {
        cout << "Given character is not an alphabet";
    }
}