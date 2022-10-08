#include<bits/stdc++.h>
using namespace std;

// 0  1  0  2  1  0  1  3  2  1  2  1
void gap(int arr[],int n){
    int sum=0;
    int left[n];
    int right[n];
    left[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        left[i]= max( left[i-1] , arr[i] );  
    }
    
    right[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--)
    {
        right[i]=max(right[i+1],arr[i]);  
    }
    
    for(int j=1;j<n-1;j++){
        int mini=min(left[j-1],right[j+1]);
        if(mini>arr[j]){
            sum+=mini-arr[j];
        }
    }
    cout<<sum<<endl;

}

int main(){
    int n,no,tar;
    cin>>n;
    
    for(int j=0;j<n;j++)
    {
        cin>>no;
        int arr[no];
        for(int i=0;i<no;i++)
        {
        cin>>arr[i];
        }
        gap(arr,no);
    }
}