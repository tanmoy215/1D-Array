#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v{2,1,1,2,1,0,1,0,2,0};
    int size=v.size();
    int law=0,mid=0,hi=size-1;
    while(mid<=hi){
        if(v[mid]==2){
            int temp = v[mid];
            v[mid]=v[hi];
            v[hi]=temp;
            hi--;
        }
        if(v[mid]==0){
            int temp=v[mid];
            v[mid]=v[law];
            v[law]=temp;
            law++;
            mid++;
        }
        if(v[mid]==1){
            mid++;
        }
    }
    for(int i=0;i<size;i++){
        cout<<v[i]<<" ";
    }
}