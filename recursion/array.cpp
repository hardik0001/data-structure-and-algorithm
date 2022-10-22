#include<bits/stdc++.h>
using namespace std;
void  print(int* arr,int n,int i=0){
    if(i==n-1){
        cout<<arr[i];
        return;
    }
    cout<<arr[i]<<" ";
    print(arr,n,i+1);   
}
int main(){
    int n,j=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    print(arr,n,j);
}