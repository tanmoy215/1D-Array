#include<bits/stdc++.h>
using namespace std;
int main(){
     vector<int> arr{2,1,4,2,7,8,9,6,5};
    int n = arr.size();
     int max = 0,smax = 0,tmax=0;
     for(int i=0;i<n;i++){
        if(max<arr[i]){
            tmax = smax;
            smax = max;
            max = arr[i];
        }
     }
     cout<<"Max : "<<max<<endl<<"smax : "<<smax<<endl<<"Tmax : "<<tmax<<endl;
    return 0;
}