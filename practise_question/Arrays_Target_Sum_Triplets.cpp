#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int target;
    cin>>target;
    for(int i=0;i<=n;i++)
    {
        int l,r;
        l=0;
        r=n-1;
        int sum;
        while(l<r)
        { 
            
            
            if(arr[i]+arr[l]+ arr[r]==target)
            {
                cout<<arr[i]<<" "<<arr[l]<<" and "<<arr[r]<<endl;
                l++;
                r--;
            } 
            else if(arr[i]+arr[l]+ arr[r]<target){
                l++;
            }
            else{
                r++;
              }
            
            
        }
        
    }
}