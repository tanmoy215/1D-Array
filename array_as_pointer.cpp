#include<iostream>
using namespace std;
int main(){
    int size=5;
    int arr[5]={3,2,4,1,6};
    int *ptr = arr;
    //  for(int i=0;i<size;i++){
    //      cout<<ptr[i]<<" ";
    //  }
     for(int i=0;i<size;i++){
         cout<<*ptr<<" ";
         ptr++;https://www.geeksforgeeks.org/dsa-sheet-by-love-babbar/
     }
}