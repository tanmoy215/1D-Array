#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    
    vector<int>v{1,3,5,2};      //Given Vector
    int n= v.size();
    int idx=-1;
    //1) Finding the pivot index    
    for(int i=n-2;i>=0;i--){
        if(v[i]<v[i+1]){
            idx = i;
            break;
        }
    }
    //2) reverse after piovt
    reverse(v.begin()+idx+1,v.end());
    //3) finding the just greater element then idx
    int j=-1;
    for(int i=idx+1;i<n;i++){
        if(v[idx]<v[i]){
            j=i;
            break;
        }
    }
    //4) swapping idx and just greater element
    int temp=v[idx];
    v[idx]=v[j];
    v[j]=temp;
    //Finally print the vector
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}