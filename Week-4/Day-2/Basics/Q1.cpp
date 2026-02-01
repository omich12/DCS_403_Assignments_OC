// Q1. Input and Display a 3×3 Matrix
// Declare a 3×3 integer array.
// Take input from the user and display it in matrix form.

// Hint:
// Use two nested loops: the outer loop for rows and the inner loop for columns.

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

    cout << "Matrix:\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
