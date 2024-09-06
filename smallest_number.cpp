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
        if(arr[i]<0) cout<<"Negative Number"<<endl;
        }
     int sm=arr[0];
    for(int i=0;i<size;i++){
       if(arr[i]<sm) sm = arr[i];
    }
    cout<<"Smallest NUmber : "<<sm;
}