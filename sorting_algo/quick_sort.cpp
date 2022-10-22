#include<bits/stdc++.h>
using namespace std;


int partition(int arr[],int low,int high){
    int pivot=arr[high];
    int i=low-1;
    for(int j=low;j<high;j++){
        if(arr[i]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    
    swap(arr[low],arr[high]);
    return i+1;
}
void quicksort(int arr[],int lb,int up){
    if(lb<up){
        int loc= partition(arr,lb,up);
        quicksort(arr,lb,loc-1);
        quicksort(arr,loc+1,up);
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;

}