// Q8. Passing a 2D Array to a Function
// Write a function printMatrix() that prints a 3×3 matrix.

// Hint:
// Use fixed column size in parameters: void printMatrix(int arr[][3]).

#include <iostream>
using namespace std;

void printMatrix(int arr[][3])
{
    cout << "Result are: \n";

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int arr[3][3];

    cout << "Enter the 9 (3x3) elements:\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    printMatrix(arr);

    return 0;
}
