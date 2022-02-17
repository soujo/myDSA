#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Pass by Reference - This is a special feature of C++ language ( doesnot applicable for C ) where we are passing the reference which is just an alias of the actual variable

void swap(int &a, int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}

int main(){
    int x=12,y=90;
    cout<<"Before swaping "<<endl;
    cout<<x<<" "<<y<<endl;
    swap(x,y);
    cout<<"After swaping "<<endl;
    cout<<x<<" "<<y<<endl;
    return 0;
}