#include<bits/stdc++.h>
#include<string>
using namespace std;
string key[]={"","abc","def","ghi" ,"jkl" ,"mno" , "pqrs" , "tuv" , "wx" ,"yz"};
void rec(string s,int i,string temp,int &count){
   
    if(temp.length()==s.length()){
        count++;
        cout<<temp<<" ";
        return;
    }
 
    for(int j=0;j<key[s[i]-'0'].length();j++){
        rec(s,i+1,temp+key[s[i]-'0'][j],count);
        
    }
    
}
int main(){
    string s;
    getline(cin,s);
    int cnt=0;
    rec(s,0,"",cnt);
    cout<<endl;
	cout<<cnt<<endl;
    
}
    