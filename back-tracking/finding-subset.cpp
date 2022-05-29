#include<bits/stdc++.h>
using namespace std;

void printSub(char *input,char *output,int i,int j){
    if(input[i]=='\0'){
        output[j]='\0';
        cout<<output<<" ";
        return ;
    }
    // now the acse when we are including the i-th index
    output[j]=input[i]; 
    printSub(input,output,i+1,j+1);
    // now tha case when we are not including the input the index j
    printSub(input,output,i+1,j);
    // here basically we are overriding the jth-index in the abovo ca se
    return ;
}

int main(){
    char input[100];
    cin>>input;
    char output[100];
    printSub(input,output,0,0);

    // inititally the both index i and j is at the 0
    return 0;
}