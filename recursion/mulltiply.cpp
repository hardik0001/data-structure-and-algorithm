#include<iostream>
using namespace std;
void  multiply(int n, int m,int& ans){
    int res;
    if(m==0){
        return ;
    }
    ans =  ans  + n;
    multiply(n,m-1,ans);
    
}
    int main(){
    int n,m;
    cin>>n>>m;
    int ans=0;
    multiply(n,m,ans);
    cout<<ans;
}