#include<iostream>
using namespace std;
int main(){
     int size;
     cout<<"enter array size : ";
     cin>>size;
     int arr[size];
     //input
     for(int i=0;i<size;i++){
        cout<<i+1<<" element : ";
        cin>>arr[i];
     }
     int max = arr[0];
    for(int i=0;i<size;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    cout<<"Maximum NUmber : "<<max;
}