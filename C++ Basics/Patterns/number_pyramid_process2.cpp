#include <iostream>
using namespace std;
int main()
{
    int i, j, k, space, n;
    cout << "Enter the number of rows : ";
    cin >> n;
    cout << endl;
    for (i = 1; i <= n; i++)
    {
        for (space = n - i; space; space--)
        {
            cout << "  ";
        }

        for (j = 1, k = 2 * i - 1; j <= 2 * i - 1, k; j++, k--)
        {
            if (j <= k)
                cout << j << " ";
            else
                cout << k << " ";
        }
        cout << endl;
    }
    return 0;
}