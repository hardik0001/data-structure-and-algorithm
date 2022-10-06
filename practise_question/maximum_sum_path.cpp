#include<bits/stdc++.h>
using namespace std;
int mux(int x,int y)
{
    return (x>y) ? x:y;
}
int maximum_sumpath(int arr1[],int arr2[],int m,int n){
    int i=0,j=0;
    int sum1=0,sum2=0,result=0;
    while(i<m && j<n){
        if(arr1[i]<arr2[j]){
            sum1+=arr1[i++];
        }
        else if((arr1[i]>arr2[j])){
            sum2+=arr2[j++];
        }
        else{
            result+= mux(sum1,sum2) + arr1[i];
            sum1=0;
            sum2=0;
            i++;
            j++;  
        }    
    }
    while(i<m){
        sum1+=arr1[i++];
    }
    while(j<n){
        sum2+=arr2[j++];

    }
    result+= mux(sum1,sum2);

    return result;
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
        /////////
        int arr1[no1];
        for(int m=0;m<no1;m++)
        {
        cin>>arr1[m];
        }
        cout<<maximum_sumpath(arr,arr1,no,no1)<<" ";
    }
   
}