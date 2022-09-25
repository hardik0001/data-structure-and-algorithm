#include<iostream>
#include <bits/stdc++.h>
using namespace std;
bool prime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true; 
 
    if (n % 2 == 0 || n % 3 == 0)
        return false;
 
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
 
    return true;
}

void isprime(int n){
for(int i=2;i<=n;i++){
    if(prime(i)){
        cout<<i<<" ";
    }
        
    }
}

int main(){
    int n,a;
    cin>>n;
    isprime(n);
}
