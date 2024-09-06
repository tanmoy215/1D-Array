#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int size;
    cout<<"enter Array size : ";
    cin>>size;
    vector <int> v(size);
    for(int i=0;i<size;i++){
        cout<<i+1<<" th element : ";
        cin>>v[i];
    }
    vector<int> b(size);
    for(int i=0;i<size;i++){
        for( int j=i+1;j<size;j++){
            if(v[i]<v[j]){
                int temp = v[i];
                v[i]=v[j];
                v[j]=temp;
            }
        }    
    }
    cout<<"1st array \n";
    for(int i=0;i<size;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"Copied Array \n ";
    for(int i=0;i<size;i++){
        b[i]=v[i];
    }
    cout<<"//reverse \n";
    
    sort(b.begin(),b.end());

    for(int i=0;i<size;i++){
        cout<<b[i]<<" ";
    }
//     #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     int size = 6;
//     vector<int> v{5,3,2,2,3,2};
//     vector<int> b(size);
//     int s = v.size();
//     for(int i=0;i<s;i++){
//         b[i]=v[(size-1)-i];
//     }
//     cout<<"\n";
//     for(int i=0;i<s;i++){
//         cout<<b[i]<<" ";
//     }
// }
    
}