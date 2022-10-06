
#include<bits/stdc++.h>
using namespace std;
void sort_arr(int arr1[],int arr2[],int m,int n){
    int result[m+n],i=0,k=0,l=0,j=m+n-1;
    while(i<j){
    if(arr1[i]<arr2[k]){
        result[l]=arr1[i];
        i++;
        l++;
    }
    else{
        result[l]=arr2[k];
        l++;
        k++;
    }
    }
    for(int j=0;j<m+n;j++){
        cout<<result[j]<<" ";

    }
    

   
}

int main(){
    int n,no,no1;
    cin>>n;
    for(int j=0;j<n;j++)
    {
        cin>>no>>no1;
        int arr[no];
        for(int i=0;i<no;i++)
        {
        cin>>arr[i];
        }
        sort(arr,arr+n);
        /////////
        int arr1[no1];
        for(int m=0;m<no1;m++)
        {
        cin>>arr1[m];
        }
        sort(arr1,arr1+no1);
        sort_arr(arr,arr1,no,no1);
    }
   
}