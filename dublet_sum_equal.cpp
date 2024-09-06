#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v;
    //input
    for(int i=0;i<6;i++){
        int a;
         cout<<i+1<<" th element : ";
         cin>>a;
         v.push_back(a);
    }
    int x=10;
 for(int i=0;i<6;i++){
    for(int j=i+1;j<6;j++){
        if(v[i]+v[j]==x) cout<<"Dublet :("<<v[i]<<","<<v[j]<<")"<<" and index :("<<i<<","<<j<<")"<<endl;
    }
 }
}