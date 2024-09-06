#include<iostream>
using namespace std;
int main(){
 int num1[]={1,2,3,0,0,0};
 int num2[]={2,5,6};
 int n = sizeof(num1)/sizeof(num1[0]);
 int m= sizeof(num2)/sizeof(num2[0]);
    int i=0;
    int j=0;
    while(i<m){
        if(num1[i]<num2[j]){
                num1[i]=num1[i];
                i++;
              }   
        else { //num2<num1
               int temp = num1[i];
               num1[i]=num2[j];
               num2[j]=temp; 
               i++;
        }
   }
   
  if(i>=m){
    while(i<n){
        int temp = num1[i];
        num1[i]=num2[j];
        num2[j]=temp;
        i++;
        j++;
    }
  }

    for(int i=0;i<n;i++){
        cout<<num1[i]<<" ";
    }
}