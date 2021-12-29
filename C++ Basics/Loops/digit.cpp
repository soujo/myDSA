// Program to display the digits of a number ( reverse )
// Program for Sum of Digits of a Number
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num, rem, sum = 0;
    cout << "Enter the number : ";
    cin >> num;

    while (num != 0)
    {
        rem = num % 10;
        sum = sum + rem;
        num = num / 10;
        cout << rem;
    }
    cout << endl;
    cout << "The sum of digits is " << sum;
    return 0;
}