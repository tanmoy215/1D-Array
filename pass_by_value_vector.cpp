#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void change(vector<int> b){
    b[0]=19;
    for(int i=0;i<b.size();i++){
         cout<<b[i]<<" ";
     }
     cout<<endl;
}
int main(){
    vector<int> v{2,5,7,1,4,7,4,7};
     for(int i=0;i<v.size();i++){
         cout<<v[i]<<" ";
     }
     cout<<endl;
 //   sort(v.begin(),v.end());
 change(v);
     for(int i=0;i<v.size();i++){
         cout<<v[i]<<" ";
     }
     cout<<endl;
}