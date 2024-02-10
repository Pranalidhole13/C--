#include<iostream>
using namespace std;
class base{
    private:
    int length;
    int breadth;
    public:
    void setlength()
    {
        length=l;
    }
    void setbreadth()
    {
        breadth=b;
    }
    int area(){ return length*breadth;}

};
int main(){
    base b;
    b.setlength(10);
    b.setbreadth(20);
    cout<<b.arae()<<endl;
}
