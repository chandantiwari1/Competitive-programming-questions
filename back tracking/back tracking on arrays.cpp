#include<bists/stdc++.h>
using namespace std;
#define ll long long   // here I defined long long as ll


// void printArray functions is used to print the array itself.
void printArray(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void fillArray(int *arr,int i,int n,int val){
    //here it's the base condition when i==n terminates the  functions and rturn;
    if(i==n){
        printArray(arr,n);
        return ;
    }
    arr[i]=val;
    // here above we are assigning the value to the arrray
    fillArray(arr,i+1,n,val+1);
    // now this one is the finally back tracking code in this backtracking I am making all the array elemenst negative by just multiplying with -1.
    arr[i]=arr[i]*-1;
}

int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        arr[i];
    }
    fillArray(arr,0,size,1);
    printArray(arr,n);
    return 0;
}