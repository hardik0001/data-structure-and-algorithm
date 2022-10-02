#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,index;
    cin>>n;
    cin>>index;
    int arr[n];

    for(int i=0;i<=n;i++){
        cin>>arr[i];
    }    
    for(int j=0;j<=n-1;j++)
    {
        for(int i=index+1;i<=n-1;i++)
        {
        if(arr[i]<arr[index]){
            index=i;
        }
        }


    }
    for(int i=0;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}