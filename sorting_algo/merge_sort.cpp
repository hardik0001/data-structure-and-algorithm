#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int low,int mid,int high){
    int i=low;
    int j=mid+1;
    int k=low;
    int b[high-1];
    while(i<=mid && j<=high){
        if(arr[i]<=arr[j]){
            b[k]=arr[i];
            i++;
        }
        else{
            b[k]=arr[j];
            j++;
        }
        k++;
    }
    if(i>mid){
        while(j<=high){
            b[k]=arr[j];
            j++;
            k++;
        }
    }
    else{
        while(i<=mid){
            b[k]=arr[i];
            i++;
            k++;
        }
    }
    
    for(int m=low;m<=high;m++){
       
        arr[m]=b[m];
    }
}
void mergesort(int arr[],int lb,int up){
    if(lb<up){
        int mid=(lb+up)/2;
        mergesort(arr,lb,mid);
        mergesort(arr,mid+1,up);
        merge(arr,lb,mid,up);
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    mergesort(arr,0,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;

}