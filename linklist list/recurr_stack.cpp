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
int main(){
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    insertFrombottom(s,100);
    while(s.empty()!=false){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
   

}