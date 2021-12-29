// Program to find prime numbers
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int prime, count = 0;
    cout << "Enter a number : ";
    cin >> prime;

    for (int i = 1; i < prime + 1; i++)
    {
        if (prime % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        cout << "Prime number";
    }
    else
    {
        cout << "Not a Prime number";
    }
    return 0;
}