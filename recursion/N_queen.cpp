#include<bits/stdc++.h>
using namespace std;
bool cellissafe(string board[],int r,int c,int i,int j){
    //top
    int row=i,col=j;
    while(row>=0){
        if(board[row][col]=='Q'){
            return false;
        }
        row--;

    }
    //top left
    row=i;
    while(row>=0 && col>=0){
        if(board[row][col]=='Q'){
            return false;
        }
        row--;
        col--;
    }
    //top right
    row=i,col=j;
     while(row>=0 && j<c){
        if(board[row][col]=='Q'){
            return false;
        }
        row--;
        col++;
    }
    return true;
    
}
bool nqueenproblem(string board[],int r, int c,int i){
    if(i==r){
        // print the board
        for(int i = 0 ; i < r ; i++){
			for(int j = 0 ; j < c ; j++){
			cout << board[i][j] << " " ;
		}
		cout << endl;
		}

		cout << " =================== " << endl;
		// return true;
		return false;
    }
    for(int j=0;j<c;j++){
        if(cellissafe(board,r,c,i,j)){
            board[i][j]='Q';
            bool dekhkoRightplacementhai= nqueenproblem(board,r,c,i+1);
            // in which case i needed to remove the Q placed
            if(dekhkoRightplacementhai==false){
                board[i][j]='.';
            }
            if(dekhkoRightplacementhai==true){
                return true;
            }
        }
    }
    return false;
}
int main(){
    string board[]={"....","....","....","...."};
    int row=4, col=4;
    bool check =nqueenproblem(board,row,col,0);
    return 0;
}