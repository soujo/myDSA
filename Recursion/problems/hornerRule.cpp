#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// O(n)
double expo(int x, int n)
{
    static double mul = 1;
    if (n == 0)
        return mul;
    mul = 1 + x * mul / n;
    return expo(x, n - 1);
}

// Using loops

double loop(int x, int n)
{
    double mul = 1;
    for (; n > 0; n--)
    {
        mul = 1 + x * mul / n;
    }
    return mul;
}

int main()
{
    cout << expo(4, 15) << endl;
    cout << loop(4, 15);
    return 0;
}