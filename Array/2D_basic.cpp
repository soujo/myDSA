
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    // memory allocated in stack
    int arr[3][4]={
                    {1,2,3,4},
                    {2,3,4,5,},
                    {3,4,5,6}
    };

/*************************/
    int *arr1[3]; // stack

    //heap
    arr1[0]= new int [4];
    arr1[1]= new int [4];
    arr1[2]= new int [4];

/*******************************/
    int **arr2; //stack

    //heap
    arr2=new int*[3];
    //heap
    arr2[0] = new int [4]; 
    arr2[1] = new int [4]; 
    arr2[2] = new int [4]; 
    return 0;
}