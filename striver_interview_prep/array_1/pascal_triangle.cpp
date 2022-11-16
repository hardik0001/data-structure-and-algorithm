#include<bits/stdc++.h>
using namespace std;
void bio(int i,int j);
void pascal(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<bio(i,j)<<" ";
        }
    }
}
void bio(int i,int j){
    int res=1;
    if(j>i-j){
        j=i-j;
        for(int m=0;m<j;m++){
            res*=i-m;
            res/=m+1;
        }
       
    }
     return res;
}
int main(){
    int n;
    cin>>n;
    pascal(n);
}