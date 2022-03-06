#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Iterative approach - O(n)
int loop(int n)
{
    int term0 = 0, term1 = 1, sum;
    for (int i = 2; i <= n; i++)
    {
        sum = term0 + term1;
        term0 = term1;
        term1 = sum;
    }
    return sum;
}

// Brute force recursion - O(2^n)

int bruteRecursion(int n)
{
    if (n <= 1)
        return n;
    return bruteRecursion(n - 2) + bruteRecursion(n - 1);
}

// Optimized recursion ( Using memorization ) - O(n)
int store[10];
int optimizedRecursion(int n)
{
    if (n <= 1)
    {
        store[n] = n;
        return n;
    }
    else
    {
        if (store[n - 2] == -1)
            store[n - 2] = optimizedRecursion(n - 2);

        if (store[n - 1] == -1)
            store[n - 1] = optimizedRecursion(n - 1);

        return store[n - 2] + store[n - 1];
    }
}
int main()
{
    int x = 7;
    cout << "Iterative approach : " << loop(x) << endl;
    cout << "Brute Recursion : " << bruteRecursion(x) << endl;

    for (int i = 0; i < 10; i++)
        store[i] = -1;

    cout << "Optimized Recursion : " << optimizedRecursion(x) << endl;

    return 0;
}