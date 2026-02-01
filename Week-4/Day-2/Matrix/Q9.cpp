// Q9. Check if a Matrix is Symmetric
// Determine if a 3×3 matrix is symmetric.

// Hint:
// A matrix is symmetric if A[i][j] == A[j][i] for all i, j.

#include <iostream>
using namespace std;

int main()
{
    int arr[3][3];
    bool symmetric = true;

    cout << "Enter the 9 (3x3) elements:\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] != arr[j][i])
            {
                symmetric = false;
                break;
            }
        }
    }

    if (symmetric)
        cout << "Matrix is Symmetric 😃!!!";
    else
        cout << "Matrix is Not Symmetric 😟!!!";

    return 0;
}
