#include<iostream>
#include<vector>
using namespace std;
int main(){
    int size;
    cout<<"enter size : ";
    cin>>size;
    vector<int>v(size);
    for(int i=0;i<size;i++){
        cout<<i+1<<" th element : ";
        cin>>v[i];
    }
    int i=0,j=size-1;
    while(i<j){
        if(v[i]<0) i++;
        else if(v[j]>0) j--;
        else if(v[i]>0 && v[j]<0){
            int temp = v[i];
            v[i]=v[j];
            v[j]=temp;
            i++;
            j--;
        }
    }
    for(int i=0;i<size;i++){
        cout<<v[i]<<" ";
    }
}