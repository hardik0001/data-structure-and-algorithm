#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int n=s.length();
    for(int i=0;i<n;i++){
        string temp="";
        for(int j=i;j<n;j++){
            temp=temp + s[j];
            cout<<temp<<endl;
        }
    }
   
}