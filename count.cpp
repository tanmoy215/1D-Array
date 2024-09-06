#include<iostream>
using namespace std;
int main(){
     int size;
     cout<<"enter array size : ";
     cin>>size;
     int arr[size];
     int x;
     cout<<"enter x : ";
     cin>>x;
     //input
     int count=0;
     for(int i=0;i<size;i++){
        cout<<i+1<<" element : ";
        cin>>arr[i];
     }
    for(int i=0;i<size;i++){
        if(arr[i]>x) count+=1;
    }
    cout<<"Total Greater Number : "<<count;
}