#include<bits/stdc++.h>
using namespace std;

void permutate(string &str,vector<string> &v,int l,int r ){
    //base case
    if(l==r){
        if(!(find(v.begin(),v.end(),str)!=v.end())){
            v.push_back(str);
            return ;
        }
    }else {
          for(int i=l;i<=r;i++){
            swap(str[i],str[l]);
            permutate(str,v,l+1,r);
            swap(str[i],str[l]);
        }

    } 
}

int main(){
    string str;
    cin>>str;
    int n=str.size()-1;
    vector<string> v;
    permutate(str,v,0,n);
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}