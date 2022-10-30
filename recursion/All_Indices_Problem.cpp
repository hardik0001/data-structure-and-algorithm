#include<bits/stdc++.h>
using namespace std;
void index(int arr[],int n,int j,int tar){
    if(j==n){
        return;
    }
    else if(arr[j]==tar){
        cout<<j<<" ";
    }
    index(arr,n,j+1,tar);

   
}
int main(){
     int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int tar;
    cin>>tar;
    int j=0;
    index(arr,n,j,tar);
}