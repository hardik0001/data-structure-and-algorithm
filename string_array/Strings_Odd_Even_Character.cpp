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
        if(i%2==0){
            str[i]++;
            
            cout<<str[i];
        }
        else{
            str[i]--;
            cout<<str[i];
        }
    }

}