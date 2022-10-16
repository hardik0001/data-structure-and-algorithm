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
    for(int m=0;m<col;m++){
        if( m%2 == 0){
			for(int n=0;n<row;n++){
            cout<<arr[m][n]<<", ";
            }
            }
       else{
           for(int j=row-1;j>=0;j--){
               
               cout<<arr[m][j]<<", ";
           }
       }
       
    }
    cout<<"END";
    return 0;
}