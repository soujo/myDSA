#include <iostream>
using namespace std;

// Print Floyd's Triangle:
//  1
//  2 3
//  4 5 6
//  7 8 9 10

int main()
{
    int n, count = 1;
    cout << "Enter the number of rows : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
    return 0;
}