#include<bits/stdc++.h>
using namespace std;
void  print(int* arr,int n,int i=0){
    if(n==i){
        cout<<arr[n];
        return;
    }
    cout<<arr[n]<<" ";
    print(arr,n-1,i);   
}
int main(){
    int n,j=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    print(arr,n-1,j);
}