#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,smallest;
    cin>>n;
    int arr[n];
    for(int i=0;i<=n;i++){
        cin>>arr[i];
    }    
    smallest=arr[0];
    for(int j=0;j<=n-1;j++)
    {
        if(smallest>arr[j]){
            smallest=arr[j];
        }

    }
   cout<<smallest;
    return 0;
}