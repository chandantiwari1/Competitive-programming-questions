// N quesen's all ways in this problem i will return the total number of ways in which you can place a queen in the grid

#include<bits/stdc++.h>
using namespace std;


// This function creates a board of the size and return the total number of count asfter increasing the values 

bool isSafe(int n,int board[][20],int r,int c){
    for(int i=r,j=c;i>=0 and j>=0 ; i--.j--){
        if(board[i][j]==1){
            return false;
        }
    }
    for(int i=0;i<r;i++){
        if(board[i][c]==1){
            return false;
        }
    }
    for(int i=r,j=c;i>=0 and j<n;i--,j++){
        if(board[i][j]==1){
            return false ;
        }
    }
    return true;
}

int solve(n,board[][20],int r){
    // Baase case when row is equeal to number of all rows 
    // when all the queens are placed successfully
    if(r==n){
        cnt++;
        return ;
    }


    // recursive case 
    for(int i=0;i<n;i++){
        if(isSafe(n,board,r,i)){
            board[r][i]=1;
            solve(n,board,r+1);
            board[r][i]=0;
        }
    }    
}

int totalNQueens(int n){
    cnt=0;
    int board[20][20];
    cnt = solve(n,board,0);
    return cnt;
}

int main(){
    int n;
    cin>>n;
    cout<<totalNQueens(n)<<"\n";
    return 0;
}