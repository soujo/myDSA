#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int power(int m,int n){
    if(n==0)
        return 1;
    return power(m,n-1)*m;
}

//Less number of multiplication
int optimized( int m,int n){
    if(n==0){
        return 1;
    }

    if(n%2==0){
        return optimized(m*m,n/2);
    }
    else{
        return optimized(m*m,(n-1)/2)*m;
    }
}

int main(){
    int ans = power(2,5);
    int ans2 = optimized(2,5);
    cout<<ans<<endl;
    cout<<ans2;
    return 0;
}