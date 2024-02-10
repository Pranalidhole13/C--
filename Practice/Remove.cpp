#include<iostream>
using namespace std;
int main()
{
    int arr[]={12,13,14,15,16};
    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;
    cout<<arr[3]<<endl;
    cout<<arr[4]<<endl;
    int i,size;
    int index=2;
    for(i=index;i<size-1;i++){
       arr[i]=arr[i+1];
       
    }
    size=i--;
    cout<<"Size of array : "<<arr[size]<<endl;
    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;
    cout<<arr[3]<<endl;
    cout<<arr[4]<<endl;
    return 0;
}