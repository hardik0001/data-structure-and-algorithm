#include<bits/stdc++.h>
using namespace std;
int max_cir_sum(int arr[],int n){
    if (n == 1){
        return arr[0];
    }
        
    int sum=0;
    for ( int i = 0; i < n; i++){
        sum+=arr[i];
    }
    int max_sum=arr[0],max_sum_so_far=arr[0],min_sum=arr[0],min_sum_so_far=arr[0];
    for ( int i = 1; i < n; i++){
        max_sum=max(max_sum +arr[i],arr[i]);
        max_sum_so_far=max(max_sum,max_sum_so_far);
        
        min_sum=min(min_sum + arr[i],arr[i]);
        min_sum_so_far=min(min_sum_so_far,min_sum);
    }

    if(min_sum_so_far==sum){
        return max_sum_so_far;
    }

    return max(max_sum_so_far,sum-min_sum_so_far);
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        int arr[x];
        for(int i=0;i<x;i++)
        {
        cin>>arr[i];
        }
        
        cout<<max_cir_sum(arr,x)<<endl;

    }
    
    
    
}