// Program to find the sum of n-natural numbers

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int sum = 0, n;
    cout << "Enter the nth number : ";
    cin >> n;
    for (int i = 1; i < n + 1; i++)
    {
        sum = sum + i;
    }
    cout << sum << endl;
    return 0;
}