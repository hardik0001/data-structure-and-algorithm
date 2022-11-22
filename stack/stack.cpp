#include<bits/stdc++.h>
using namespace std;
void reverse1(stack<int> s)
{
    
    if (s.empty())
        return;

    int x = s.top();
    s.pop();
    reverse1(s);
    cout << x << " ";
    s.push(x);
}
int main(){
 stack<int>s;
 s.push(a);
 s.push(b);
 s.push(c);
 s.push(d);
int n=s.size();
reverse(s,s+n);
PrintStack(s);

}