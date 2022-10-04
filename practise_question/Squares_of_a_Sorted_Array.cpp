#include<bits/stdc++.h>
using namespace std;
void prod(int arr[],int n , int tar){
    
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(arr[i]+arr[j]==tar){   
                cout"Deepak should buy roses whose prices are "<<i <<"and<"<j;
        }  
            
    }
    
}

int main(){
    int n,no,tar;
    cin>>n;
    int arr[n];
    for(int j=0;j<nj++){
        cin>>no;
        for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>tar;
    prod(arr,n,tar);
    }
}