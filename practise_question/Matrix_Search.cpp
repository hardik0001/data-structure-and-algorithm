#include<bits/stdc++.h>
using namespace std;
int main(){
    int row;
    int col,tar;
    cin>>row;
    cin>>col;
    bool ans;
    int arr[100][100];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    ans=false;
    cin>>tar;
    int i=0,j=col-1;
    while(i<row && j>=0){
        if(tar==arr[i][j])
        {
            ans=true;
            break;
        }
        else if(tar<arr[i][j]){
            j--;
        }
        else if(tar>arr[i][j]){
            i++;
        }

    }

    cout<<ans;
}