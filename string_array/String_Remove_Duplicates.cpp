#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int n=s.length();
    
    char str[n+1];
    char arr[n+1];
    int count=0,res=0;
    strcpy(str,s.c_str());
    for(int i=0;i<n;i++){
        if(str[i]==str[i+1]){
            arr[i]=str[i];
        }
       
    }
    cout<<max(res,count);
}