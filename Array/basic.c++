/*

• Array is a collection of similar data elements under one name, each element is
accessible using its index
• Memory for array is allocated contagiously
• For-each loop is used for accessing array
• N-dimension arrays are supported by C++
• Two-Dimensional Arrays are sued for Matrices
• Array can be created in Stack or Heap Section of memory

*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << arr[4] << endl;

    // Normal for loop
    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    // For each loop
    for (auto x : arr)
    {
        cout << x;
    }
    return 0;
}