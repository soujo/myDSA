#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int countSubsequence(int i, int arr[], int sum, int s, int n)
{
    if (i == n)
    {
        if (s == sum)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    sum += arr[i];
    int left = countSubsequence(i + 1, arr, sum, s, n);

    sum -= arr[i];
    int right = countSubsequence(i + 1, arr, sum, s, n);

    return left + right;
}
int main()
{
    int arr[] = {1, 2, 1};
    int n = 3;
    int sum = 2;
    cout << countSubsequence(0, arr, 0, sum, n);
    return 0;
}