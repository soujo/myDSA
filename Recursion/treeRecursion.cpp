#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void f( int n){
    if(n>0){
        cout<<n;
        f(n-1); // 1st call
        f(n-1); // 2nd call
    }
}

int main(){
    int x=3;
    f(x);
    return 0;
}