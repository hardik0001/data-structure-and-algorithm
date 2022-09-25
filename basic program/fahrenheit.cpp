#include<iostream>
using namespace std;
int main(){
    float intial,fin,f,c;
    cin>>intial;
    cin>>fin;
    for(int i=intial;i<=fin;i=i+20){
        f=i;
        c=((5/9.0)*(f-32));
        cout<<i<<" "<<c<<endl;
    }
    return 0;
}