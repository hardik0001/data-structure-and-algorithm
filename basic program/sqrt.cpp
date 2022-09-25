#include<bits/stdc++.h>
using namespace std;
int main(){
  int n=arr.size();
  sort(arr.begin(),arr.end());
  int ans=0;
  int i=0,j=0;
  while(j<n){
      if(arr[j]-arr[i]>k){
          ans++;
          i=j;
          j++;
      }
      else{
          j++;
      }
  } 
    if(arr[i]-arr[j]<k)ans++;
    return ans;
    return 0;

}