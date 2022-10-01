#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    char ch='A' ,ch1='E';
    cin>>n;
    for(i=0;i<=n;i++){
        for(j=n-i;j>=0;j--){
            cout<<ch;
            ch++;
        }
        ch--;

        for(int p=n-i;p>=0;p--){
                cout<<ch;
                ch--;
            }
        cout<<endl;
    }
}