// #include<iostream>
// using namespace std;
// int main(){
//     int size;
//     cout<<"enter size of the array : ";
//     cin>>size;
//     int v[size];
//     for(int i=0;i<size;i++){
//         cout<<i+1<<" th element : ";
//         cin>>v[i];
//     }
//     int n = sizeof(v)/sizeof(v[0]);
//     int zc = 0,oc=0;
//     for(int i=0;i<n;i++){
//         if(v[i]==0) zc+=1;
//         else oc+=1;
//     }
//     for(int i=0;i<zc;i++){
//             v[i]=0;
//     }
//      for(int i=zc;i<n;i++){
//             v[i]=1;
//     }
//     for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//     }
// }


// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int size;
//     cout<<"enter size : ";
//     cin>>size;
//     vector<int>v(size);
//     for(int i=0;i<size;i++){
//         cout<<i+1<<" th element : ";
//         cin>>v[i];
//     }
//     int no0=0,no1=0;                     //special case
//     for(int i=0;i<size;i++){
//         if(v[i]==0) no0+=1;
//         else no1+=1;
//     }
//     for(int i=0;i<size;i++){
//         if(i<no0) v[i]=0;
//         else v[i]=1;
//     }
//     for(int i=0;i<size;i++){
//         cout<<v[i]<<" ";
//     }
// }



#include<iostream>
#include<vector>
using namespace std;
int main(){
    int size;
    cout<<"enter size : ";
    cin>>size;       //1,0,0,1,0,1,0,0,1,1,1,0,1
    vector<int>v(size);
    for(int i=0;i<size;i++){
        cout<<i+1<<" th element : ";
        cin>>v[i];
    }   
    int i=0,j=size-1;
    while(i<j){
        if(v[i]==0) i++;
        else if(v[j]==1) j--;
        else if(v[i]==1 && v[j]==0) {
            v[i]=0;
            v[j]=1;
            i++;
            j--;
        }
    }
    for(int i=0;i<size;i++){
        cout<<v[i]<<" ";
    }
}