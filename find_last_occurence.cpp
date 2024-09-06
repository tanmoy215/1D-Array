#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    // int arr[6]={1,2,1,4,5,4};
    // int x=4;
    // for(int i=5;i>=0;i--){
    //     if(arr[i]==x){
    //         cout<<"index is : "<<i;
    //         break;
    //     }
    bool flag = true;
    int x=100;
    int xds;
    vector<int> v{3,1,10,3,1,30};
        for(int i=v.size();i>=0;i--){
            if(v[i]==x){
                flag = false;
                xds = i;
                break;
            }         
}
if(flag == false) cout<<"Last Index is : "<<xds;
else cout<<"-1";
}