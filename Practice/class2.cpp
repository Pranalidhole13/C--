#include<iostream>
using namespace std;
class Student
{
    public:
    string name;
    int roll_no;
};
int main()
{
    Student s;
    s.name="Pranali";
    s.roll_no=15;
    cout<<s.name<<" "<<s.roll_no<<endl;
    return 0;
}