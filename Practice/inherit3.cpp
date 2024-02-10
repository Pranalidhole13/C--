#include<iostream>
using namespace std;
class Rectangle {
    private:
        int length;
        int breadth;
    public:
    // Rectangle(){
    //     length=0;
    //     breadth=0;
    // }
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
    int getlength(){
        return length;
    }
    int getbreadth(){
        return breadth;
    }
    
    void setlength(int l)
    {
        length=l;
        
    }   
    void setbreadth(int b)
    {
        breadth=b;
    }
    
    int area(){
        return length*breadth;
    }
    int perimeter(){
        return 2*(length*breadth);
    }
};
int main()
{
    Rectangle r();
    r.setlength(10);
    r.setbreadth(5);
    r.area();
    return 0;
    
}