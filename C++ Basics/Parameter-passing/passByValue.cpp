#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Pass by value - This doesnot changes the actual value of the variable 

void swap(int a, int b){
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