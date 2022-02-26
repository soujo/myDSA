#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int fact (int n ){
    if(n==0){
        return 1;
    }
    else{
        return fact(n-1)*n;
    }
}

int main(){
    int ans = fact(5);
    cout<<ans;    
    return 0;
}