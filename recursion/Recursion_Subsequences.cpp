#include<bits/stdc++.h>
#include<string>
#include<algorithm>
using namespace std;

void print(string str,int repo,string str2)
{    
     if(str[repo]=='\0'){
         if(str2 < str){
               cout<<str<<"\n";
         }
         return;
     }

     else{
        for(int i=repo ; str[i] != '\0' ; i++)
        {
            swap(str[repo],str[i]);
            print(str,repo+1,str2);    
        }

     }
}
int main() {
	string s;
	getline(cin,s);
    string str1=s;
	sort(s.begin(),s.end());
	print(s,0,str1);
}