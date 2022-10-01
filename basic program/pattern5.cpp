#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<"*";   
        }
        cout<<" ";

        for(int p=1;p<=n-i+1;p++){
                cout<<"*";   
            }
        cout<<" ";
        for(int q=1;q<=n-i+1;q++){
                cout<<"*";   
            }
        cout<<" ";
            for(j=1;j<=i;j++){
            cout<<"*";
            
        }
        cout<<endl;
    }
}