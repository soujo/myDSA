#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Recursion has two phases : 
// 1. Ascending or calling 
// 2. Descending or returning 

//* Example function

//* void something ( int n ){
//*     if( <base condition>){
//*         calling somthing from here 
//*         something( n );
//*         returning someting from here 
//*     }
//* }

void calling ( int n){
    if(n>0){
        cout<<n<<" ";
        calling(n-1);
    }
}

void returning (int n){
    if(n>0){
        returning(n-1);
        cout<<n<<" ";
    }
}

int main(){
    int x=5;
    calling(x);
    cout<<endl;
    returning(x);
    return 0;
}