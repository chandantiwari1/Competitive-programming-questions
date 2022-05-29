#include<bits/stdc++.h>
using namespace std;

bool compare(string a,string b){
    if(a.length()==b.length()){
        return a<b;
    }else {
        return a.length()<b.length();
    }
}

void printSub(char *input,char *output,int i,int j,vector<string> &v){

  // now every backtrack function has their base cse 
  if(input[i]=='\0'){
      output[j]='\0';
      string str(output);
      v.push_back(str);
      return ;
  }

  output[j]=input[i];
  // is the case when I am includeing the i the index
  printSub(input,output,i+1,j+1,v);
  // now the case when we are not including the i the inee 
  // this is the basically is to overwrite the jth index
  printSub(input,output,i+1,j,v);
 return ;
}

int main(){
    char input[100];
    cin>>input;
    char output[100];
    vector<string> v;
    printSub(input,output,0,0,v);
    sort(v.begin(),v.end(),compare);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
    
}

