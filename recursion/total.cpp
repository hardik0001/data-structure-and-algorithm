#include<bits/stdc++.h>
using namespace std;
void  print(int n){
    if(n==0){
        cout<<total;
        return;
    }
    else{
        int total = n + print(n-1);
    }
    

   
}
int main(){
    int n;
    cin>>n;
    print(n);
}