#include<bits/stdc++.h>
#include<string>
#include<cctype>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int n=s.length();
    char str[n+1];
    strcpy(str,s.c_str());
    for(int i=0;i<n;i++){
        if(str[i]>='A'&& str[i]<='z'){
            char ch=tolower(str[i]);
            cout<<ch;
        }
        else{
            char cas=toupper(str[i]);
            cout<<cas;
        }
    }

}