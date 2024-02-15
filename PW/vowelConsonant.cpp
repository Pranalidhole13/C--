#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter the character : ";
    cin >> ch;
    int ascii = (int)ch;
    if ((ch >= 97 && ch <= 122) || (ch >= 65 && ch <= 90))
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            cout << "Character is Vowel";
        }
        else
        {
            cout << "Character is Consonant";
        }
    }
    else
    {
        cout << "Given character is not an alphabet";
    }
}