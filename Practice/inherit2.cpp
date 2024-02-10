#include<iostream>
using namespace std;
class Base{
    public:
    void display(){
    cout<<"this is a base class"<<endl;
    }
};
//    Derived class inherit the features of base class
    class derived:public Base{
    public:
    void show(){
        cout<<"This is derived class"<<endl;
    }
};
int main(){
    Base b;
    cout<<"***About Base class***"<<endl;
    b.display();
    derived d;
    cout<<"***About Derived class*** "<<endl;
    d.display();
    d.show();
}