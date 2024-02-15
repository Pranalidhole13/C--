#include <iostream>
using namespace std;
int main()
{
    int CP, SP;
    cout << "Enter Cost Price: ";
    cin >> CP;
    cout << "Enter Selling Price: ";
    cin >> SP;
    if (SP > CP)
    {
        cout << "Profit Occured = " << SP - CP;
    }
    else if (SP < CP)
    {
        cout << "Loss = " << CP - SP;
    }
    else
    {
        cout << "No profit ,No Loss";
    }
}