#include<iostream>
using namespace std;
// int getMax(int arr[],int n){
//     int max=INT_MIN;
//     for(int i=0;i<n;i++){
//         if(arr[i]>max){
//             max=arr[i];
//         }
//     }
//     return max;
// }
int getMax(int num[], int n) {

    int max = INT_MIN;
    
    for(int i = 0; i<n; i++) {

        // maxi = max(maxi, num[i]);

       if(num[i] > max){
           max = num[i];
       }
    }

    //returning max value
    return max;
}
int main(){
int size;
cin>>size;
int arr_new[100];
for(int i=0;i<5;i++)
{
    cin>>arr_new[i];
}
cout<<getMax(arr_new,size);
return 0;
}