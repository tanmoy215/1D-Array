#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {2,1,3,4,5,7,7,8};
    int n = sizeof(arr)/sizeof(int);
    for(int i=0;i<n;i++){
        if(i%2==0){
            arr[i]*=10;
        }
        else arr[i]*=2;
    }
    //output
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}