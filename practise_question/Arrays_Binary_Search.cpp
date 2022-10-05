#include<bits/stdc++.h>
using namespace std;
int binarysearch(int arr[],int l,int r,int n ){
    while(l<r){
        int m=(l+(r-1))/2;
        if(arr[m]==n){
            return m;
        }
        if(arr[m]<n){
            l=m+1;
        }
         if(arr[m]>n){
            r=m-1;
        }
    }
    return -1;

}

int main(){
    int n,no;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>no;
    cout<<binarysearch(arr,0,n-1,no);
    
}