#include<bits/stdc++.h>
using namespace std;
int sum(int arr[],int n){
    if(n==1){
        return arr[0];
    }

    int sum1=arr[0]+sum(arr+1,n-1);
    return sum1;
}
int sumof
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<" sum"<<sum(arr,n);
}