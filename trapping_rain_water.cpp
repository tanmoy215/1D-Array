// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     //Given Array
//     vector<int>v{0,1,0,2,1,0,1,3,2,1,2,1};
//     int n = v.size();
//     //declare Previous Array with previous greatest element
//     vector<int>vv(n);
   
//     for(int i=0;i<n;i++){
//          int pv=-1;
//        for(int j=0;j<i;j++){
//             if(pv<v[j])
//              pv=v[j];
//        }
//        vv[i]=pv;
//     }
//     //nrxt greatest element 

//     vector<int>vvv(n);
        
//         for(int i=0;i<n;i++){
//             int ng = -1;
//             for(int j=i+1;j<n;j++){
//                 if(ng<v[j]){
//                     ng=v[j];
//                 }
//             }
//             vvv[i]=ng;
//         }
//         //minimum Array
//         vector<int>vvvv(n);
//         for(int i=0;i<n;i++){
//             vvvv[i]=min(vv[i],vvv[i]);
//         }
//         //calculating water
//         int water =0;
//         for(int i=1;i<n-1;i++){
//             if(v[i]<vvvv[i]){
//                 water+=(vvvv[i]-v[i]);
//             }
//         }
//         cout<<"Final output : "<<water;
    
// }
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> hight{0,1,0,2,1,0,1,3,2,1,2,1};  //height
    int n = hight.size();
     vector<int> prev(n);  //prev greater Array
     for(int i=0;i<n;i++){
        int pv =-1;
        for(int j=0;j<i;j++){
                if(pv<hight[j]){
                    pv=hight[j];
                }
        }
        prev[i]=pv;
     }

     //next greater element
     vector<int>next(n);
     for(int i=0;i<n;i++){
        int nt =-1;
        for(int j=i+1;j<n;j++){
                if(nt<hight[j]){
                    nt=hight[j];
                }
        }
        next[i]=nt;
     }
     //finding minimum Array
     for(int i=0;i<n;i++){
            prev[i]=min(prev[i],next[i]);
     }
     //calculating water
     int water =0;
     for(int i=0;i<n;i++){
            if(hight[i]<prev[i]){
                 water+=(prev[i]-hight[i]);
            }
     }
     cout<<"Final Ans : "<<water;
    //  for(int i=0;i<n;i++){
    //     cout<<mini[i]<<" ";
    //  }
}