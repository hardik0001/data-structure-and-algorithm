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
    int sr=0,er=row-1,sc=0,ec=col-1;
    while(sr<=er && sc<=ec){
       
       for(int i=sr;i<=er;i++){ 
        cout<<arr[i][sc]<<", ";
        }
        sc++;
        for(int i=sc;i<=ec;i++){
        cout<<arr[er][i]<<", ";
        }
        er--;
        for(int i=er;i>=sr;i--){
        cout<<arr[i][ec]<<", ";
        }
        ec--;
        for(int i=ec;i>=sc;i--){
        cout<<arr[sr][i]<<", ";
        }
        //cout<<endl;
        sr++;
        
   }
    cout<<"END";
    return 0;
}