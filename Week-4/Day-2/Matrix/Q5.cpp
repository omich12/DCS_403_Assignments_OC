// Q5. Transpose of a Matrix
// Print the transpose of a given 3×3 matrix.

// Hint:
// Swap rows and columns: element at [i][j] becomes [j][i].

#include <iostream>
using namespace std;

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

    cout << "Transpose of a matrix:\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}
