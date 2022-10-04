#include<bits/stdc++.h>
using namespace std;
void prod(int arr[],int n ){
    
    for(int i=0;i<n;i++){
        int p=1;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                continue;
            }
            else{
                p=p*arr[i];
            }
            cout<<p;
        }
        
    }
    
}

int main(){
    int n;
    cin>>n,no;
    vector<int>v;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>no;
    prod(arr,n);
    
}