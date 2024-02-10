#include<iostream>
using namespace std;
int main(){
    // int n;
    // cin>>n;
    char ch;
    cin>>ch;
    if(ch>='A' && ch<='Z'){
      cout<<"1";
    }
    else if(ch>='a' && ch<='z'){
        cout<<"-1";
    }
    else{
        cout<<"0";
    }
    return 0;
}