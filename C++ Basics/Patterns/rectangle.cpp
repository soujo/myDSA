#include <iostream>
using namespace std;
// Print the pattern
//  ****
//  ****
//  ****
//  ****
//  ****

int main()
{
    int rows, cols;
    cout << "Enter the number of rows : ";
    cin >> rows;
    cout << "Enter the number of columns : ";
    cin >> cols;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= cols; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}