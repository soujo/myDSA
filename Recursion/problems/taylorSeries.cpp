#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// O(n2)
double expo(int x, int n)
{
    static double pow = 1, fact = 1;
    double temp;

    if (n == 0)
        return 1;
    temp = expo(x, n - 1);
    pow = pow * x;
    fact = fact * n;
    return temp + pow / fact;
}
int main()
{
    cout << expo(4, 30);
    return 0;
}