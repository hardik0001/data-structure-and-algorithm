#include<bits/stdc++.h>
using namespace std;
bool checkbalanceparanthesis(string s){
    stack<char>st;
    int l=s.length();
    for(int i=0;i<l;i++){
        if(s[i]=='[' || s[i]=='{' || s[i]=='('){
            st.push(s[i]);
            
        }
        else{
            if(s[i]=='}'){
                if(st.empty()==true || st.top()!='{'){
                    return false; 
                }
                else{
                    st.pop();
                }
                
            }
            else if(s[i]==']'){
                if(st.empty()==true || st.top()!='['){
                    return false;
                }
                else{
                    st.pop();
                }   
            }
            else{
                if(st.empty()==true || st.top()!='('){
                    return false;
                }
                 else{
                    st.pop();
                } 
            }
        }
    }
    return st.empty();
}
int main(){
    string s="[{()}]";
    if(checkbalanceparanthesis(s)){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}