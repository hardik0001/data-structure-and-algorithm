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
        int sum=0;
        for(int j=i+1;j<=n;j++)
        { 
            for(int k=j+1;k<=n;k++)
            {
                sum=arr[i]+arr[j]+ arr[k];
                if(sum==target)
                {
                    cout<<arr[i]<<" "<<arr[j]<<" and "<<arr[k]<<endl;
               
                } 
            }
            
        }
        
    }
}