// Program to find GCD/HCF
// Process - subtract both number till they are same or equal to 1

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int num1,num2;
    cout<<"Enter first number : ";
    cin>>num1;
    cout<<"Enter second number : ";
    cin>>num2;

    while( num1 != num2){
        if(num1>num2){
            num1=num1-num2;
        }
        else if(num2>num1){
            num2=num2-num1;
        }

    }

    cout<<"The GCD is "<<num1;
    return 0;
}