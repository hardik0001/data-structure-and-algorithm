#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int n=s.length();
    char str[n+1];
    strcpy(str,s.c_str());
    //char arr[0]=str[0];
     int count=1;
    for(int i=0;i<n;i++){
       
        if(str[i]==str[i+1]){
            count++;
        }
        else{
            cout<<str[i]<<count;
            count=1;
        }
    }
}