#include<iostream>
using namespace std;
int main(){
    int n,no;
    cin>>n;
    int ans=0;
    for(int i=1;i<=n;i++){
        cin>>no;
        ans=ans ^ no;
        
    }
    cout<<ans;
    return 0;
}