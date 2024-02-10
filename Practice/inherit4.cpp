#include<iostream>
using namespace std;
class Base
{
    public:
    Base(){
        cout<<"Non param of base class"<<endl;
    }
    Base(int x){
        cout<<"Param of Base class"<<endl;
    }
};
class Derived:public Base
{
    public:
    Derived(){
        cout<<"Non param of Derived class"<<endl;
    }
    Derived(int y){
        cout<<"Param of Derived class"<<endl;
    }
    Derived(int x,int y):Base(x){
        cout<<"Param of Derived class"<<endl;
    }
};
int main()
{
    Derived d;
    Derived d1(10,5);
}