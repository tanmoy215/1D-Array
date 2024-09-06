#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr{2,1,4,2,4,6,7,2};
    int n = arr.size();
    int odd = 0;
    int even = 0;
     for(int i=0;i<n;i++){
        if(i%2==0){
            even+=arr[i];
        }
        else odd+=arr[i];
     }
     cout<<"Diff. : "<<even-odd<<endl;
    return 0;
}