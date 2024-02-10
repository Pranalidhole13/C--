#include<iostream>
using namespace std;
class Rectangle
{
    private:
    int length;
    int breadth;
    public:
    // it is setting length and breadth as 1
      Rectangle()
    {
        length=1;
        breadth=1;
    }
    Rectangle(int l,int b)
    {
        length=l;
        breadth=b;
    }
    Rectangle(Rectangle &r)
    {
        length=r.length;
        breadth=r.breadth;
    }
    void setlength(int l)
    {
        length=l;
    }
    void setbreadth(int b)
    { 
        breadth=b;
    }
    int getlength(){
        return length;
    }
    int getbreadth(){
        return breadth;
    }
    int area()
    {
        return length*breadth;
    }
};
class cuboid:public Rectangle
{
    private:
    int height;
    public:
    cuboid(int h)
    {
        height=h;
        // setlength(l);
        // setbreadth(b);
    }
    int getheight(){
      return height;

    }
    void setheight(int h)
    {
      height=h;
    }
    int volume()
    {
        return getlength()*getbreadth()*height;
    }
};
int main()
{
    cuboid c(5);
    c.setlength(10);
    c.setbreadth(7);
    cout<<" Volume of cuboid is: "<<c.volume();
}