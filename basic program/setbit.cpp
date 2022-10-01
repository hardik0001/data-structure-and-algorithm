#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ,mask=1,setbitcount=0;
    cin>>n;
    while(n!=0){
        if(n & mask==1){
            setbitcount++;
        }
        n=n>>1;
    }
    cout<<"total set bit count "<<setbitcount;
    return 0;
}