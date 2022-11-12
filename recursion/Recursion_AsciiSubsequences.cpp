#include <bits/stdc++.h>
using namespace std;
vector<string>ans;

void rec(string s,string res,int i,int &c){
    if(i==s.length()){
        if(res.length()>0){
            c++;
            ans.push_back(res);
        }
        return;
    }
    char ch=s[i];

    rec(s,res,i+1,c);

    rec(s,res + ch,i+1,c);

    rec(s, res + to_string(int(ch)) ,i+1,c);
}
int main() {
    string s;
    getline(cin,s);
    int n=s.length();
    int count=0;
    rec(s,"",0,count);

    for(auto p:ans){
        cout<<p<<" ";
    }
    cout<<endl;
    cout<<count;
   

}
    

