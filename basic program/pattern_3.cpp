#include<iostream>
using namespace std;
int main()
{
 int n,i,j,w=1,k,pattern=0,pattern2=0;
 cin>>n;
 for(i=1;i<=n;i++)
 {
    while(w<=n-1){
        cout<<" ";
        w=w+1;
    }
    j=1;
    pattern=i;
    while(j<=i){
        cout<<pattern<<" ";
        j=j+1;
    }
    k=1;
    pattern2=2*i-2;
    while(k<=i-1){
        cout<<pattern2<<" ";
        pattern2=pattern2-1;
        k=k+1;
    }
    cout<<endl;
    
    

 }
 
}