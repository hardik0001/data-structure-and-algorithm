#include<bits/stdc++.h>
using namespace std;
int main(){
    string n;
    getline(cin,n);
    int len=n.length;
    char cha_arr[len+1]
    strcpy(cha_arr,n.c_str());
    for(int i=0;i<len;i++){
        if(cha_arr[i]>='A' && cha_arr[i]<='Z' ){
            cout<<endl;

        }
        else{
            cout<<cha_arr[i];
        }
    }
}