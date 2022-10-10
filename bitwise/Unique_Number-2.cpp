#include <bits/stdc++.h>
using namespace std;
void Single(int arr[] , int n){
    int one=arr[0];
    int x=0;
    int y=0;
    for(int i=1;i<n;i++){
        one=one^arr[i];
    }
    int set_bit_no=one & ~(one-1);

    for(int i=0;i<n;i++){
        if(arr[i] & set_bit_no){
            x=x^arr[i];  
        }
        else{
            y=y^arr[i];           
        }   
       
    }
    if(x<y){
        cout<<x<<" ";
        cout<<y<<" ";  
    }
    else{
        cout<<y<<" ";
        cout<<x<<" ";  
                
    }    
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Single(arr,n);
}
    