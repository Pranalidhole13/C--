// #include<iostream>
// using namespace std;
// class base{
//     public:
//     void display()
//     {
//        cout<<"Parent class"<<endl;
//     }
// };
// class derived :public base{
//     public:
//     void show()
//     {
//         cout<<"child class "<<endl;
//     }
// };
// int main()
// {
//     base b;
//     b.display();
//     derived d;
//     d.display();
//     d.show();
//     return 0;
// }
#include<iostream>
using namespace std;
class Base{
    public:
    int x;
    void display(){
        cout<<"This is base class"<<endl;
    }
};
class Derived:public Base{
    public:
    int y;
    void show(){
        cout<<"This is derived class"<<endl;
    }
};
int main(){
    Base b;
    b.x=10;
    b.display();
    Derived d;
    d.y=20;
    d.display();
    d.show();
    return 0;
}


