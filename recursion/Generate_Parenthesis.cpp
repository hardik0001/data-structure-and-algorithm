#include<bits/stdc++.h>
using namespace std;
void gen(int open,int close,int n,string str){
    if(close==n && open==n){
        cout<<str<<endl;
        return;
    }
    if(open==close){
        gen(open+1,close,n,str+"(");   
    }
    else{
        gen(open,close+1,n,str+")");  
        if(open>close){
            if(open<n){
                gen(open+1,close,n,str+"(");
            }
            
           
        }
    }
}
int main(){
    int n;
    cin>>n;
    gen(0,0,n,"");
}