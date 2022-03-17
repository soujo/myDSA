#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool anySubsequence(int index, vector<int> &vec, int arr[], int sum, int s, int n)
{
    if (index == n)
    {
        // cout<<sum<< " ";
        // cout<<endl;
        // cout<<s<<" ";
        if (s == sum)
        {
            for (auto x : vec)
                cout << x << " ";
            cout << endl;
            return true;
        }
        else
        {
            return false;
        }
    }

    vec.push_back(arr[index]);
    sum += arr[index];
    if (anySubsequence(index + 1, vec, arr, sum, s, n) == true)
    {
        return true;
    }
    sum -= arr[index];
    vec.pop_back();
    if (anySubsequence(index + 1, vec, arr, sum, s, n) == true)
    {
        return true;
    }

    return false;
}
int main()
{
    int arr[] = {1, 2, 1};
    int n = 3;
    int sum = 2;
    vector<int> vec;
    anySubsequence(0, vec, arr, 0, sum, n);
    return 0;
}