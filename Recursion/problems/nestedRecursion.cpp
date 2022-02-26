#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int nested ( int n){
    if(n>100){
        return n-10;
    }
    else{
        return nested(nested(n+11));
    }
}
int main(){
    int ans = nested(98);
    cout<<ans;
    return 0;
}