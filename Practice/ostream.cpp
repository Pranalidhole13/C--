#include<iostream>
using namespace std;
class complex{
    public:
    int real;
    int img;
    friend ostream & operator<<(ostream &out,complex &c);
};
ostream & operator<<(ostream &out,complex &c){
    out<<c.real<<" i+"<<c.img<<endl;
    return out;
}
int main()
{
    complex c(10,5);
    cout<<c;
    operator<<(cout,c);
}