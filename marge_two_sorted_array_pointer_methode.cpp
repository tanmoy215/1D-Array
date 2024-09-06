#include<iostream>
#include<vector>
using namespace std;
int main(){
    
    vector<int>v{1,4,5,8};  //First sorted Array
    vector<int>vv{2,3,6,7,11,12}; //Secon Sorted Array
    int size = v.size()+vv.size();  //total size of first and second Array
    vector<int>vvv(size);  //Final Array
    int m=v.size();  // first Array size
    int n=vv.size(); // Second Array size
   
    int i=0;
    int j=0;
    int k=0;
    while(i<m && j<n){
        if(v[i]<vv[j]){
            vvv[k]=v[i];
            k++;
            i++;
        }
        else{ //vv[j]<v[i]
            vvv[k]=vv[j];
            k++;
            j++;
        }
    }
    if(i>=m){
        while(j<n){
            vvv[k]=vv[j];
            j++;
            k++;
        }
    }
    if(j>=n){
        while(i<m){
            vvv[k]=v[i];
            i++;
            k++;
        }
    }
    for(int i=0;i<size;i++){
        cout<<vvv[i]<<" ";     //Print Final Marge Sorted Array
    }
}