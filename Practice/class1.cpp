// #include<iostream>
// using namespace std;
// class Rectangle
// {
//     public:
//     int length;
//     int breadth;

//     int area()
//     {
//         return length*breadth;
//     }
//     int perimeter()
//     {
//         return 2*(length*breadth);
//     }
// };
// int main()
// {
// Rectangle r1,r2;
// r1.length=10;
// r1.breadth=15;
// cout<<"Area of r1 recatngle is " <<r1.area()<<endl;
// cout<<" perimeter of r1 rectangle " <<r1.perimeter()<<endl;
// r2.length=20;
// r2.breadth=5;
// cout<<"Area of r2 recatngle is " <<r2.area()<<endl;
// cout<<" perimeter of r2 rectangle " <<r2.perimeter()<<endl;
// }
#include<iostream>
using namespace std;
class Rectangle{
    public:
    int length;
    int breadth;
    int area(){
        //cout<<length*breadth<<endl;
        return length*breadth;
    }
    int perimeter(){
        cout<<2*(length*breadth)<<endl;
    }
};
int main()
{
    Rectangle r;
    r.length=10;
    r.breadth=20;
    cout<<r.area()<<endl;
    r.perimeter();
}