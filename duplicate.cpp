#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"enter size : ";
    cin>>size;
    int arr[size];
    //input
    for(int i=0;i<size;i++){
        cout<<i+1<<" element : ";
        cin>>arr[i];
    }
    //output
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size-1;j++){
            if(arr[i]==arr[j]) cout<<"Matched : "<<arr[i]<<endl;
        }
    }
}