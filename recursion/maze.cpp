#include<bits/stdc++.h>
using namespace std;
bool isvalidcell(int i,int j,int n,int m,int maze[][4]){
    return (i<n && j<m && maze[i][j]!=1);
}
bool ratandmaze(int maze[][4],int n,int m,int i,int j){
    if(i==n-1 && j==m-1){
        return true;
    }
    if(! isvalidcell(i,j,n,m,maze)){
        return false;
    }

    bool rightoption = ratandmaze(maze,n,m,i,j+1);
    bool downoption = ratandmaze(maze,n,m,i+1,j);

    return(rightoption  || downoption);
}
int main(){
    int maze[][4]={
        {0,0,0,0},
        {0,1,1,1},
        {0,0,0,1},
        {0,0,0,0}
        };
    int n=4,m=4;
    bool isitpossible =ratandmaze(maze,n,m,0,0);
    if(isitpossible==true){
        cout<<"possible";
    }
    else{
        cout<<"not possible";
    }

    return 0;
}