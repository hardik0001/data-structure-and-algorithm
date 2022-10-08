#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int sum=0,mod=1e9+7;
    cin>>n;
    int arr[n];
     int temp[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int no;
    cin>>no;
    for(int i=0;i<no;i++){
        int x;
        cin>>x;
       for(int j=0;j<n;i++){
        temp[j]= arr[j] + arr[(j-x+n)%n];

       }
       for(int i=0;i<n;i++)
       {
        temp[i]=arr[i];
        }

    }
    for(int i=0;i<n;i++){
        sum+=temp[i];
    }
    cout<<sum%mod;
    
    
}