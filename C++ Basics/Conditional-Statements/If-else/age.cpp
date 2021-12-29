#include <iostream>
#include <bits/stdc++.h>
using namespace std;


// • If and else is used for writing conditional statement
// • If condition is true then if block is executed
// • If condition is false then else block is executed
// • 0 - means false
// • 1- means true or non0zero value is also true
// If can be nested inside if as well as else statement
// Nesting of is is also written as else-if ladder


int main()
{
    int age;
    cout << "Tell me your age: ";
    cin >> age;

    if (age < 18)
    {
        cout << "You cannot come to my party" << endl;
    }
    else if (age == 18)
    {
        cout << "You are a kid and you will get a kid pass to the party" << endl;
    }
    else
    {
        cout << "You can come to the party" << endl;
    }
    return 0;
}
