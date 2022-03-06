#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
    if (n == 0)
        return 1;
    return fact(n - 1) * n;
}
//
int combination(int n, int r)
{
    // nCr = n!/(r!*(n-r!))
    int numerator = fact(n);
    int denomerator = fact(r) * fact(n - r);
    return numerator / denomerator;
}

int recursion(int n, int r)
{
    if (r == 0 || r == n)
        return 1;
    return recursion(n - 1, r - 1) + recursion(n - 1, r);
}
int main()
{
    cout << combination(4, 2) << endl;
    cout << recursion(4, 2);
    return 0;
}