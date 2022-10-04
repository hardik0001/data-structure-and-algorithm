#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,target;
    cin>>n;
    cin>>target;
    int arr[n];
    for(int i=0;i<=n;i++){
        cin>>arr[i];
    }
    
    
    for(int i=0;i<=n;i++){
        int temp=target-arr[i];
        int s=0;
        int e=0;
        while(s>e){
            if(arr[s]+arr[e]>temp){
                e--;
            }
            else if(arr[s]+arr[e]<temp){
                s--;
            }
            else(arr[s]+arr[e]==temp){
                cout<<arr[s]<<" and "<<arr[e]<<endl;
                s--;
                e--;
            }
        }
        f/*or(int j=i+1;j<=n;j++){
            sum=arr[i]+arr[j];

            if(sum==target){
                if(arr[i]>arr[j]){
                cout<<arr[j]<<" and "<<arr[i];
                }
                else{
                cout<<arr[i]<<" and "<<arr[j];
                }
            }
        }*/
        cout<<endl;
    }
}