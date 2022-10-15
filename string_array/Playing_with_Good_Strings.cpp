#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int n=s.length();
    
    char str[n+1];
    int count=0;
    strcpy(str,s.c_str());
    for(int i=0;i<=n;i++){
        //cout<<str[i]<<" ";
        /*if(str[i]==str[n-1]){
            cout<<str[i];
            continue;
        }*/
        if(str[i]<=str[i+1]){
            
            count++;
            cout<<str[i]<<count<<" ";
           
        }
        else if(str[i]>=str[i+1]){
            //cout<<str[i]<<" ";
            count=0;
        }
    }
    cout<<count;
}