#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int tar;
    cin>>tar;
    for(int i=0;i<n;i++){
        if(arr[i]==tar){
            count++;
            cout<<arr[i]<<" ";
        }
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==tar){
                count=count+2;
                cout<<arr[i]<<" "<<arr[j]<<" ";
            }
        }

    }
    cout<<endl;
    cout<<count;
}