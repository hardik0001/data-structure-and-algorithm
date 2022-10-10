#include <bits/stdc++.h>
using namespace std;
int Single(int arr[] , int n,int k){
    int size=8*sizeof(int);
    int count[size];
    memset(count,0,sizeof(count));
    for(int i=0;i<size;i++){
        for(int j=0;j<n;j++){
            if((arr[j] & (1<<i))!=0){
                count[i]+=1;
            }
        }
    }
    int res=0;
    for(int i=0;i<size;i++){
        res+=(count[i]%k)*(1<<i);
    }
    res=res/(n%k);
    return res;
    
}
int main() {
    int n,k=3;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<Single(arr,n,k);
    return 0;
}
    