#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr{2,1,4,2,7,8,9,6,5};
    int n = arr.size();
    int x;
    cout<<"enter value : ";
    cin>>x;
    int count=0;
    cout<<"enter number : ";
    for(int i=0;i<n;i++){
        if(arr[i]>x){
            count++;
        }
    }
    cout<<"Final ans is : "<<count<<endl;
    return 0;
}