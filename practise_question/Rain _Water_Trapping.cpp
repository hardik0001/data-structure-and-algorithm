#include<bits/stdc++.h>
using namespace std;
void gap(int arr[],int n){
    int max=0;
    for(int i=0;i<n;i++){
        if(arr[i]>=max){
            max=arr[i];
            break;
        }
        else if(arr[i]<=max){{
            max=max+arr[i];
        }
        cout<<max<<endl;

        }
    }
    
    
    
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
}cd