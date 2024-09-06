#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(4);
    // for(int i=0;i<4;i++){
    //    cin>>v[i];
    // }
    //  for(int i=0;i<4;i++){
    //      cout<<v[i]<<" ";
    //  }
    vector<int> b;
    for(int i=0;i<4;i++){
       int a;
       cin>>a;
       b.push_back(a);
    }
     for(int i=0;i<4;i++){
         cout<<b[i]<<" ";
     }
}