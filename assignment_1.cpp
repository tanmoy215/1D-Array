#include<bits/stdc++.h>
using namespace std;
int main(){
     vector<int> arr{2,1,4,3,7,8};
     int n = arr.size();
      int product = 1;
      for(int i=0;i<n;i++){
        product*=arr[i];
      }
      cout<<"Final ans is : "<<product<<endl;
    return 0;
}