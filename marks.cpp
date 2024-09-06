#include<iostream>
using namespace std;
int main(){
    int arr[10] = {78,12,89,49,6,90,45,19,89,0};
    for(int i=0;i<10;i++){
        if(arr[i]<35) cout<<"Roll Number is : "<<i<<endl;
    }
}