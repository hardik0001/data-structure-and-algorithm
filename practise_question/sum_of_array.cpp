#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,target;
    cin>>n;
    cin>>target;
    int arr[n];
    for(int i=0;i<=n;i++){
        cin>>arr[i];
    }
    
    
    for(int i=0;i<=n;i++){
        int sum=0;
        for(int j=i+1;j<=n;j++){
            sum=arr[i]+arr[j];
            if(sum==target){
                if(arr[i]>arr[j]){
                cout<<arr[j]<<" and "<<arr[i];
                }
                else{
                cout<<arr[i]<<" and "<<arr[j];
                }
            }
        }
        cout<<endl;
    }
}