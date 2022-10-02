#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i=n;
    cin>>n;
    int sumofdigitofI=0,count=0,no=0;
    while(i!=0){
        int rem=i%10;
        no+=rem*10;
        count++;
        i/=10;
        
    }
    
}