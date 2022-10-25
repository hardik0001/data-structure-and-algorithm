#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int bioc(int n,int k);
void pascaltriangle(int n)
{
    int i ,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
           cout<<bioc(i,j)<<" ";
           
        } 
        cout<<endl;
        
    }
    
    
}
int bioc(int n,int k){
    {
    int res = 1;
    if (k > n - k)
    k = n - k;
    for (int i = 0; i < k; ++i)
    {
        res *= (n - i);
        res /= (i + 1);
    }
      
    return res;
}
   
}

int main()
{
    int n,i ,j,count=0,p=0;
    cin>>n;
    pascaltriangle(n);
    return 0;
}