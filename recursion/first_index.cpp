#include<bits/stdc++.h>
using namespace std;
void  twin(int s[],int n,int c,int tar){
    if(n==c){ 
          cout<<"-1";
          return;
    }
    else if(s[c]==tar){
        cout<<c;
		return;
    }
    twin(s,n,c+1,tar);
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