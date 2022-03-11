#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void subsequence(int i, vector<int> &vec, int arr[], int n)
{
    if (i == n)
    {
        for (auto x : vec)
            cout << x << " ";
        if (vec.size() == 0)
            cout << "{}";
        cout << endl;
        return;
    }

    vec.push_back(arr[i]);
    subsequence(i + 1, vec, arr, n);
    vec.pop_back();
    subsequence(i + 1, vec, arr, n);
}
int main()
{
    int arr[3] = {3, 1, 2};
    vector<int> vec;
    subsequence(0, vec, arr, 3);
    return 0;
}