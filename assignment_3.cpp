#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr{2,1,3,6,4,7};
    int n = arr.size();
    int minn = INT_MAX;
    for(int i=0;i<n;i++){
        minn = min(minn,arr[i]);
    }
    cout<<"Final ans is : "<<minn<<endl;
    return 0;
}