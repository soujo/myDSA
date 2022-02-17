#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct rect {
    int length;
    int breadth;
};

void value( struct rect r){ //Pass by value
    r.length =30;
    cout<<"\nValue function\nLength : "<<r.length<<"\nBreadth : "<<r.breadth<<endl;   
}

void pointer( struct rect *ptr){// Pass by pointer 
    (*ptr).breadth = 23;
    cout<<"\nPointer function\nLength : "<<ptr->length<<"\nBreadth : "<<ptr->breadth<<endl;   
}
int main(){
    rect r;
    r.breadth = 20;
    r.length = 14;

    value(r);
    pointer(&r);
    cout<<"\nMain function\nLength : "<<r.length<<"\nBreadth : "<<r.breadth<<endl;
    return 0;
}