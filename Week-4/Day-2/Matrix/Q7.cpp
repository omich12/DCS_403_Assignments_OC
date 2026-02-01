// Q7. Matrix Multiplication (2×3 × 3×2)
// Multiply matrix A (2×3) with matrix B (3×2) to produce matrix C (2×2).

// Hint:
// Use triple nested loops:
// Row of A × Column of B.

#include <iostream>
using namespace std;

int main()
{
    int A[2][3], B[3][2], C[2][2] = {0};

    cout << "Enter the Matrix A (2x3):\n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> A[i][j];
        }
    }

    cout << "Enter the Matrix B (3x2):\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> B[i][j];
        }
    }

    // Multiplication of the Matrix
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    cout << "Result Matrix:\n";
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
