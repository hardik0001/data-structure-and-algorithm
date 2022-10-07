#include<bits/stdc++.h>
using namespace std;
void prod(long arr[],int n ){
    long p=1;
    long flag=0;
    for(int i=0;i<n;i++)
    {
         if(arr[i]==0){   
                flag++;
            }
            else {
                p=p*arr[i];
            }
    }
  
    for(int i=0;i<n;i++)
    {   
           if(flag>1){
               arr[i]=0;
           }
           else if(flag==1 && arr[i]!=0) {
               arr[i]=0;
           }
           else if (flag==0){
               arr[i]=p/arr[i];

           }
           /*else{
               arr[i]=p;
               
           }*/
           cout<<arr[i]<<" ";
    }    
}
int main(){
    long n;
    cin>>n;
    long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    prod(arr,n);
    
    
}