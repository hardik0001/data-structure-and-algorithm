#include<iostream>
using namespace std;
int main(){
    char c;
    cin>>c;
    if(isupper(c)){
        cout<<"UPPER";
    }
    else{
        cout<<"LOWER";
    }
    return 0;
}