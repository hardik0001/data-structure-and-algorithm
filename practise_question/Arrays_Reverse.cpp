#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[],int start ,int end){
    while(start>=end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
int printarr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    vector<int>v;
    int arr[n];
   /* for(int i=0;i<n;i++){
        cin>>arr[i];
        v.push_back(arr[i]);
    }
    reverse(v.begin(),v.end());
    for(auto p:v){
        cout<<p<<endl;
    }*/
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    revrse(arr,0,n-1);
    printarr(arr,n);
}