// Checking if a number is palindrome or not

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, rem, m=0, num;
    cout << "Enter the number : ";
    cin >> n;
    num = n;
    while (n != 0)
    {
        rem = n % 10;
        m = (m * 10) + rem; // reversed digit
        n = n / 10;
    }

    if (num == m)
    {
        cout << "Palindrome number";
    }
    else
    {
        cout << "Not a palindrome number";
    }
    return 0;
}