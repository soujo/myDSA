#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool check(string &str, int i)
{
    if (i >= str.size() / 2)
        return true;
    if (str[i] != str[str.size() - i - 1])
        return false;
    check(str, i + 1);
}

int main()
{
    string str = "121";
    cout << check(str, 0);
    return 0;
}