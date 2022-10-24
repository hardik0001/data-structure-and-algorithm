#include<bits/stdc++.h>
#include<string>
using namespace std;
void twin(int s[],int n,int c){
    int i=0;

    if(n==0){
        return c;
    }
    else if(s=="x"){
        continue;
    }
    else{
        c++;
    }
    twin(s[i+1],n-1,c);
}
int main(){
    string s;
    getline(cin,s);
    int n=s.length();
    int str[n+1];
    strcpy(str,s.c_str());
    int count=0;
    twin(s,n,count);
}