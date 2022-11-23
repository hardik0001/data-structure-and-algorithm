#include<bits/stdc++.h>
using namespace std;
void  insertFrombottom(stack<int>& st,int data){
    if(st.empty()){
        st.push(data);
        return;
    }

    int t=st.top();
    st.pop();

    insertFrombottom(st,data);
    st.push(t);
    return;
}
void  rev(stack<int>& st){
    if(st.empty()){
        return;
    }

    int t=st.top();
    st.pop();
    rev(st);
    insertFrombottom(st,t);
    return;
}
int main(){
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    
    rev(s);
    while(s.empty()== false){
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
   

}