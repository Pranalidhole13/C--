#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int age;
    bool gender;
};
int main()
{
    Student arr[3];
    for(int i=0;i<3;i++)
    {
        cin>>arr[i].name<<"Name=";
        cin>>arr[i].age<<"Age=";
        cin>>arr[i].gender<<"Gender=";
    }
}