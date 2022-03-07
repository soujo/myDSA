#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void tower(int n, int first, int second, int third)
{
    if (n > 0)
    {
        tower(n - 1, first, third, second);
        cout << "Move disc from " << first << " to " << third << endl;
        tower(n - 1, second, first, third);
    }
}
int main()
{
    tower(3, 1, 2, 3);
    return 0;
}