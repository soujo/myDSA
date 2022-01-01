#include <iostream>
using namespace std;
// Print the pattern:
//  *****
//  ****
//  ***
//  **
//  *
int main()
{
    int n, i, j;
    cout << "Enter the number of rows : ";
    cin >> n;
    for (i = n; i; i--)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}