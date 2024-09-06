#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr{2,1,3,6,1,7};
    int n = arr.size();
    bool flag = false;
    int count = 0;
      sort(arr.begin(),arr.end());
      int i=0,j=1;
      while(j<n){
        if(arr[i]==arr[j]){
            flag = true;
            break;
        }
      }
      if(flag) cout<<"Duplicate element present"<<endl;
      else cout<<"Duplicate element not present"<<endl;
    return 0;
}