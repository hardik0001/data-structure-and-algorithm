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
    
    

    int sum=0;
    for(int j=1;j<=n;j++){
        sum= sum +arr[j];
        cout<<sum<<" ";

            
        }
}