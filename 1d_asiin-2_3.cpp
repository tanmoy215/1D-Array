#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,7,6};
    int n = sizeof(arr)/sizeof(int);
    bool flag = false;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            flag = true;
            break;
        }
    }
    if(flag) cout<<"Not Sorted";
    else cout<<"Sorted";
    return 0;
}