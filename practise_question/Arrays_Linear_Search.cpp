#include<bits/stdc++.h>
using namespace std;
void search(int arr[],int n,int no ){
    for(int i=0;i<n;i++){
        if(arr[i]==no){
            cout<<i;
        }
    }
    
}

int main(){
    int n;
    cin>>n,no;
    vector<int>v;
    int arr[n];
   /* for(int i=0;i<n;i++){
        cin>>arr[i];
        v.push_back(arr[i]);
    }
    reverse(v.begin(),v.end());
    for(auto p:v){
        cout<<p<<endl;
    }*/
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>no;
    search(arr,n,no);
    
}