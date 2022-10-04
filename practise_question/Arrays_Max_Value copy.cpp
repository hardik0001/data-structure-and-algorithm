#include<bits/stdc++.h>
using namespace std;
void sqr(int arr[],int n){
    int sarr[n];
    for ( int i = 0; i < n; i++){
        int s=arr[i]*arr[i];
        sarr[i]=s;
    }
    sort(sarr,sarr+n);
    for ( int i = 0; i < n; i++){
        cout<<sarr[i]<<" ";
    }   
}
int main(){
    int n;
    cin>>n;
    vector<int>v;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sqr(arr,n);
    
}