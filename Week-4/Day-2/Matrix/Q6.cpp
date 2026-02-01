// Q6. Matrix Addition
// Add two 2×2 matrices and store the result.

// Hint:
// Add elements at the same positions: C[i][j] = A[i][j] + B[i][j].

#include <iostream>
using namespace std;

int main()
{
    int A[2][2], B[2][2], C[2][2];

    cout << "Enter the Matrix A (2x2):\n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> A[i][j];
        }
    }

    cout << "Enter the Matrix B (2x2):\n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> B[i][j];
        }
    }

    // Addition
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    cout << "Result:\n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
