#include<bits/stdc++.h>
using namespace std;
void palindrome(char str[],int n){
    int i=str[0],j=str[n],flag=1;
    for(int m=0;m<n;m++){
        if(str[m]==str[n-m-1]){
            flag=1;
        }
        else{
            flag=0;
            
        }
    }
    if(flag==1){
        cout<<"true";
    }
    else{
        cout<<"false";
    }

}
int main(){
    string s;
    getline(cin,s);
    int n=s.length();
    char str[n+1];
    strcpy(str,s.c_str());
    palindrome(str,n);
    
}