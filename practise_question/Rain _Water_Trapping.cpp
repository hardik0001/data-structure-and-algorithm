#include<bits/stdc++.h>
using namespace std;
void gap(int arr[],int n){
    int max=0,sun=0;

    for(int i=0;i<n;i++){
        for(int j=i+2;j<=n;j++){
            if(arr[i]>arr[j]){
                sum+=(arr[i]-arr[j]);
            }
        }
    }
    
    
    
}

int main(){
    int n,no,tar;
    cin>>n;
    
    for(int j=0;j<n;j++)
    {
        cin>>no;
        int arr[no];
        for(int i=0;i<no;i++)
        {
        cin>>arr[i];
        }
        gap(arr,no);
    }
}cd