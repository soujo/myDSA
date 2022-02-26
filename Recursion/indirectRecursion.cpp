#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void second (int n);
void first(int n){
    if(n>0){
        cout<<n;
        second(n-1);
    }
}

void second (int n ){
    if(n>0){
        cout<<n;
        first(n/2);
    }
}

int main(){
    int x=20;
    first(x);
    return 0;
}