#include<bits/stdc++.h>
using namespace std;
void dub(char* str ,int i,int n){
   if(i==n){
       return;
   }
   cout<<str[i];
   while(i+1<n && str[i]==str[i+1]){
       i++;
   }
   dub(str,i+1,n);
    
}

int main(){
    string s;
    getline(cin,s);
    int n=s.length();
    char str[n+1];
    strcpy(str,s.c_str());
    dub(str,0 ,n);
    
}