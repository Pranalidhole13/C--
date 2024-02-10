#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the number that u want to print"<<endl;
    cin>>ch;
    if(ch>='A'&& ch<='Z'){
        cout<<"Character is placed in between A and Z"<<endl;
    }
    else if(ch>='a'&& ch<='z'){
        cout<<"Character is placed in between a and z"<<endl;
    }
    else if(ch>='0'&& ch<='9'){
        cout<<"Character is placed in between 0 and 9"<<endl;
    }
    else{
        cout<<"Their is no any character"<<endl;
    }
    return 0;
}
