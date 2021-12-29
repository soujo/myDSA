// Program to to check if its a Leap Year
// All years which are perfectly divisible by 4 are leap years except for century years ( years ending with 00 ) which is leap year only if it is perfectly divisible by 400
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int year;
    cout << "Enter the year: ";
    cin >> year;

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                cout << year << " is a leap year" << endl;
            }
            else
            {
                cout << year << " is not a leap year" << endl;
            }
        }
        else
        {
            cout << year << " is a leap year" << endl;
        }
    }
    else
    {
        cout << year << " is not a leap year" << endl;
    }
    return 0;
}