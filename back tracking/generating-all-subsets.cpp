#include<bits/stdc++.h>
using namespace std;

void printSubsets(char *input,char *output,int i,int j){
    // base conditions. when we reached the end of the input string 
    if(input[i]=='\0'){
        output[j]='\0';
        cout<<output<<" ";
        return ;
    }

    // recusrive condition 
    // first codintions ithe that do we need to include the firt charcter 
    output[j]=input[i];
    printSubsets(input,output,i+1,j+1);//if we include the input array then we move the cursoer one step ahedad
    // now the recursive condition when exclude the a 
    printSubsets(input,output,i+1,j);
}

int main(){
    // here i declared the input array of the characters 
    char input[100];
    //output character array which stores the value of the output
    char output[100];
    cin>>input;
    printSubsets(input,output,0,0);
    return 0;
}