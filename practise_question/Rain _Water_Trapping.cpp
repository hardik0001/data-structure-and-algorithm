#include<bits/stdc++.h>
using namespace std;
void prod(int arr[],int n , int tar){
    
    int x=0;
    int y=n-1;
    int small=0;
    int large=0;
    while(x<y){
        if(arr[x]+arr[y]==tar){
            small=arr[x];
            large=arr[y];
            x++;
            y--;

        }
        if(arr[x]+arr[y]>tar){
            y--;

        }
        if(arr[x]+arr[y]<tar){
            x++;
        }
    }
    cout<<"Deepak should buy roses whose prices are "<<small<<" and "<<large<<"."<<endl;
    
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
        sort(arr,arr+no);
        cin>>tar;
        prod(arr,no,tar);
    }
}cd