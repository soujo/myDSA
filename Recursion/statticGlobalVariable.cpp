#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int change(int n)
{
    if (n > 0)
    {
        return change(n - 1) + n;
    }
}

int change2(int n)
{
    static int x = 0;
    if (n > 0)
    {
        x++;
        return change2(n - 1) + x;
    }
}

int main()
{
    int x = 5;
    cout << change(x)<<endl; 
    cout << change2(x); // For static variable
    return 0;
}