#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v{1,2,3,4,5};
    vector<int>vv{6,7,8,9};
    int d = v.size()+vv.size();
    vector<int>vvv(d);
    //Marge
     for(int i=0;i<d;i++){
        if(i<v.size()) vvv[i]=v[i];
        else vvv[i]=vv[i-5];
     }
     //final array sort
     for(int i=0;i<d;i++){
        for(int j=i+1;j<d;j++){
                if(vvv[i]>vvv[j]){
                    int temp=vvv[i];
                    vvv[i]=vvv[j];
                    vvv[j]=temp;
                }
        }
     }
    //print Marge Array
     for(int i=0;i<d;i++){
        cout<<vvv[i]<<" ";
    }
}