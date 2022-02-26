#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Time = O(n)
// Space = O(n)

int sum( int n){
    if(n==0){
        return 0;
    }
    else{
        return sum(n-1)+n;//addition is done while returning 
    }
}
int main(){
    int x= 10;
    int ans = sum(x);
    cout<<ans;
    return 0;
}