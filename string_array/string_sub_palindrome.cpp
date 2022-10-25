#include<bits/stdc++.h>
using namespace std;
void palindrome(char str[],){
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
    for(int i=0;i<n;i++){
        string temp="";
        for(int j=i;j<n;j++){
            temp=temp + s[j];
            cout<<temp<<endl;
            palindrome(temp);
        }
    }
   
}