#include<iostream>
using namespace std;
void inputstring(char* chaarr, char delimiter){
    char ch;
    ch=cin.get();
    int i=0;
    chaarr[i]=ch;
    while(ch!=delimiter){
        chaarr[i]=ch;
        i++;
        ch=cin.get();
    }
    chaarr[i]='/0';
    return; 

}
int main{
    //cin.getline(ch,0,delimiter)
    //int n,m;
    //cin>>n>>m;
    char ch[100];
    inputstring();
    ///cout<<n<<" "<<m;
    return 0;
}