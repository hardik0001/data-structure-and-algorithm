#include<bits/stdc++.h>
using namespace std;
int main(){
    int row;
    int col;
    cin>>row;
    cin>>col;
    int arr[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    
    for(int m=0;m<row/2;m++){
       int sr=0+m,er=row-1-m,sc=0+m,ec=col-1-m;
       for(int i=sr;i<=er;i++){ 
        cout<<arr[i][sr]<<", ";
        }
        sc++;
        for(int i=sc;i<=ec-m+1;i++){
        cout<<arr[ec][i]<<", ";
        }
        er--;
        for(int i=er;i>=0;i--){
        cout<<arr[i][ec]<<", ";
        }
        ec--;
        for(int i=ec;i>0+m;i--){
        cout<<arr[sr][i]<<", ";
        }
        cout<<endl;
        
   }
    cout<<"END";
    return 0;
}