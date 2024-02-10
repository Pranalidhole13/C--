#include<iostream>
using namespace std;
class Base
{
    public:
    Base()
    {
        cout<<"Default of base class"<<endl;
    }
    Base(int x)
    {
        cout<<"Param of base class"<<x<<endl;
    }
};
class Derived:public Base{
    Derived()
    {
        cout<<"Default of derived class "<<endl;
    }
    Derived(int s)
    {
        cout<<"Param od derived class "<<s<<endl;
    }
};
int main()
{
    Base b;
    // b.x=10;
    // cout<<"The value of x is "<<b.x<<endl;
}