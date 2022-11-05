#include<bits/stdc++.h>
using namespace std;
void ratandmaze(int sr,int sc,int n,int m,string str,int &c){
    if(sr==n && sc==m){
        c=c+1;
        cout<<str<<" ";
       
        return;
    }
    //horizontal
	if(sr+1<=n){
        //c=c+1;
        ratandmaze(sr+1,sc,n,m,str+"V",c);
    }
    //vertical
	if(sc+1<=m){
        //c=c+1;
        ratandmaze(sr,sc+1,n,m,str+"H",c);
    }

	//dia
    /*if(sr==sc){
        c=c+1;
        ratandmaze(sr+1,sc+1,n,m,str+"D",c);
    }*/
    
}

int main(){
    int n,m;
    cin>>n>>m;
	int count=0;
    ratandmaze(0,0,n-1,m-1,"",count);
    cout<<endl;
    cout<<count;
    
}