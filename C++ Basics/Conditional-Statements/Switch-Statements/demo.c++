#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int age;
    cout<<"Enter your age : ";
    cin>>age;
    switch (age)
    {
    case 18:
        cout << "You are 18";
        break;
    case 22:
        cout << "You are 22";
        break;

    default:
        cout << "No special cases";
    }
    return 0;
}   