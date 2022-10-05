#include<bits/stdc++.h>
using namespace std;
void inverse(int arr[],int n){
    int index=0;
    for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
           if(arr[j]==i){
               cout<<j<<" ";
           }
       }
    }
}
int main(){
    int n,no,tar;
    cin>>no;
    int arr[no];
    for(int i=0;i<no;i++)
    {
    cin>>arr[i];
    }
    inverse(arr,no);
}