#include<iostream>
using namespace std;
void reverse(int arr[], int start,int end){
    for(int i=start,j=end;i<j;i++,j--){
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
 return;
}
int main(){
    int n=5;
    int arr[5]={1,2,3,4,5};
    int k;
    cout<<"enter rotate no. : ";
    cin>>k;
    reverse(arr,0,n-k-1);
    reverse(arr,n-k,n-1);
    reverse(arr,0,n-1);
    //print array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}