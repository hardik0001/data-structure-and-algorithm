#include<bits/stdc++.h>
using namespace std;
string replace(string s){
    if(s.length()==0 ||  s.length()==1){
        return s;
    }
    if(s[0]=='p' && s[1]=='i'){
        string total=replace(s.substr(2));
        return "3.14"+ total;
    }
    else{
        return s[0]+ replace(s.substr(1));
    }
   

}
int main(){
    int n;
    cin>>n;
    string s;
    for(int i=0;i<n;i++){
        cin>>s;
        cout<<replace(s)<<endl;
    }
}