#include<iostream>
using namespace std;
int main(){
    int n,i,flag;
    cin>>n;
    for(i=2;i<=n;i++){
		if(n==0 || n==1 || n==3){
			flag=1;
			break;
		}
        if(n%i==0){
             flag==1;
            break;
        }
        
        else{
            flag==0;
        }
        
    }
    if(flag=1){
        cout<<"Prime";  
        }
    else{
        cout<<"Not Prime";
    }

}