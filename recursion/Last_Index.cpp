#include<bits/stdc++.h>
using namespace std;
void  twin(int s[],int n,int c,int tar){
    if(n==0){ 
          cout<<c;
    }
    else if(s[n]==tar){
        c
    }
    twin(s,n-1,c,tar);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int tar;
    cin>>tar;
    int c=0;
    twin(arr,n,c,tar);
}