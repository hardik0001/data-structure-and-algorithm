#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,base,des,no=0,num=0,rev=0;
    cin>>base;
    cin>>des;
    cin>>n;
    int count=0,rem;
    while(n!=0){
        rem=n%10;
        no= no + rem*pow(base,count);
        count++;
        n/=10;
    }
    
    int power=0;
    while(no!=0){
        rem=no%des;
        num=num*10 + rem;
       
        power++;
        no/=des;
    
    }
    no=num;
    while(no!=0){
        rem=no%10;
        rev=rev*10 + rem;
        no/=10;
    }
    cout<<rev;
}
