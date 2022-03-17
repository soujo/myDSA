#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void check(int i, int arr[], vector<int> &vec, int n, int sum, int s)
{
    if (i == n)
    {
        if (s == sum)
        {
            for (auto x : vec)
                cout << x << " ";
            cout << endl;
        }
        return;
    }

    vec.push_back(arr[i]);
    s += arr[i];
    check(i + 1, arr, vec, n, sum, s);
    vec.pop_back();
    s -= arr[i];
    check(i + 1, arr, vec, n, sum, s);
}
int main()
{
    int arr[] = {1, 2, 1};
    int n = 3;
    vector<int> vec;
    int sum = 2;
    check(0, arr, vec, n, sum, 0);
    return 0;
}