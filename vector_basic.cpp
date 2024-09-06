#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    //input
     cout<<v.capacity()<<endl;
    v.push_back(10);
    cout<<v.capacity()<<endl;
    v.push_back(90);
    cout<<v.capacity()<<endl;
    v.push_back(29);
    cout<<v.capacity()<<endl;
}