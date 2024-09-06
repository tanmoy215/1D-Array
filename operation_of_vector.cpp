#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(110);
    v.push_back(101);
    v.push_back(1101);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
}