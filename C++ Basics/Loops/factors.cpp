#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Program to find the factors of a number

    int num;
    cout << "Enter the number : ";
    cin >> num;
    cout << "The factors of " << num << " are ";
    for (int i = 1; i < num + 1; i++)
    {
        if (num % i == 0)
        {
            cout << i << " ";
        }
    }
    return 0;
}