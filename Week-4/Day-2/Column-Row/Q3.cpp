// Q3. Print Row-wise and Column-wise Sums
// Problem: Given a 3×3 array, print:
// Sum of each row
// Sum of each column

// Hint:
// For row sums: fix row index, loop over columns.
// For column sums: fix column index, loop over rows.

#include <iostream>
using namespace std;

int main()
{
    int arr[3][3];

    cout << "Enter the 9 elements:\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Row sums
    cout << "Row sums:\n";
    for (int i = 0; i < 3; i++)
    {
        int rowSum = 0;
        for (int j = 0; j < 3; j++)
        {
            rowSum += arr[i][j];
        }
        cout << rowSum << " ";
    }

    // Column sums
    cout << "\nColumn sums:\n";
    for (int j = 0; j < 3; j++)
    {
        int colSum = 0;
        for (int i = 0; i < 3; i++)
        {
            colSum += arr[i][j];
        }
        cout << colSum << " ";
    }

    return 0;
}
