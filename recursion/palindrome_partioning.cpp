#include<bits/stdc++.h>
using namespace std;
vector<vector<string>>ans;
void helper(string s,int pos,vector<string>validpalinpart){
    if(pos==s.length()){
        ans.push_back(validpalinpart);
        for(int i=pos;i<s.length();i++){
            pos
        }
    }
}
vector<vector<string>>partion(string s){
    vector<string>validpalinpart;
    helper(s,0,validpalinpart);
    return ans;
}
int main()
{
    vector<string>s;
    getline(cin,s);
    partion(s);
}