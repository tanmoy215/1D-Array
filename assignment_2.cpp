#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr{2,1,3,6,4,7};
    int n = arr.size();
    int max = INT_MIN;
    int smax = INT_MIN;
     for(int i=0;i<n;i++){
        if(arr[i]>max){
            smax =  max;
            max = arr[i];
        }
     }
     cout<<"Final ans is : "<<smax<<endl;
    return 0;
}