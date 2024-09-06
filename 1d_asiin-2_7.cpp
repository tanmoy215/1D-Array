#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1,2,3,8,1};
    int n = sizeof(arr)/sizeof(int);
    int i=0,j=n-1;
    bool  flag = false;
    while(i<j){
        if(arr[i]!=arr[j]){
            flag = true;
        }
        i++;
        j--;
    }
    if(flag) cout<<"Not a palindrome"<<endl;
    else cout<<"Palindrome"<<endl;
    return 0;
}