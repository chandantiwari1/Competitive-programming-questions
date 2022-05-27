#include<bits/stdc++.h>
using namespace std;

// here I am implementing the functions can i place the quenen here or not
bool canPlace(int board[][20],int n,int x,int y){
    for(int k=0;k<x;k++){
        if(board[k][y]==1){
            return false;
        }
    }
    int i=x;
    int j=y;
    while(i>=0 and j>=0){
        if(board[i][j]==1){
            return false;
        }
        i--;
        j--;
    }
    while(i>=0 and j<n){
        if(board[i][j]==1){
            return false;
        }
        i--;
        j++;
    }
    return true;
}


// now we are going to print all the board elements 
void printBoard(int n,int board[][20]){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

bool solveNQueen(int n,int board[][20],int i){
    // base case if number of rows are the equal to i 
    if(i==n){
        // print the board elements 
        printBoard(n,board);
        return true;
    }
    // now rec case , in which will try to put queen in everyo row 
    for(int j=0;j<n;j++){
        // now before putting the queen the will check is there an y queeen presented already or not 
        if(canPlace(board,n,i,j)){
            board[i][j]=1;
            bool success=solveNQueen(n,board,i+1);
            if(success){
                return true;
            };
            // elese backtrack the code and tell the parents you places quess nin the woin positions
            board[i][j]=0;
        }
    }
    return false;
}


int main(){
    int board[][20]={0}; // declaring a chess board and assigning all its elements to 0
    int n;
    cin>>n;
    solveNQueen(n,board,0);
    return 0;
}