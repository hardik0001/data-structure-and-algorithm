#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n;
    cin>>k;
    int arr[n];
    for(int i=0;i<=n;i++){
        cin>>arr[i];
    }    
    for(int j=0;j<=n-1;j++)
    {
        for(int i=0;i<=n-1;i++)
        {
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
        }


    }
    
    for(int i=0;i<=n;i++){
        if(i==k){
            cout<<arr[i];
        }

        
    }
    return 0;
}