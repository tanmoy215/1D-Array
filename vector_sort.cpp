#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v;
    for(int i=0;i<4;i++){
      int a;
      cin>>a;
      v.push_back(a);
    }
    cout<<endl;
     for(int i=0;i<4;i++){
         cout<<v[i]<<" ";
     }
     cout<<endl;
     sort(v.begin() , v.end());
     for(int i=0;i<4;i++){
         cout<<v[i]<<" ";
     }
     cout<<endl;
}