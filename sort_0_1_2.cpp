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
    //count
        int no0=0,no1=0,no2=0;
        for(int i=0;i<size;i++){
            if(v[i]==0) no0+=1;
            else if(v[i]==1) no1+=1;
            else if(v[i]==2) no2+=1;
        }
        //sorting
        for(int i=0;i<size;i++){
            if(i<no0) v[i]=0;
            else if(i<no0+no1) v[i]=1;
            else if(i<size) v[i]=2;
        }
        for(int i=0;i<size;i++){
            cout<<v[i]<<" ";
        }
}