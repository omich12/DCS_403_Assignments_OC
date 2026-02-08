// Eight Queens Problem
// Description:
// Place 8 queens on an 8×8 chessboard such that none attack each other.

// Rules:
// No two queens share the same row.
// No two queens share the same column.
// No two queens share any diagonal.

#include <iostream>
using namespace std;

// Check if it is safe to place a queen at board[row][col]
bool isSafe(int board[8][8], int row, int col)
{

    // Check the column above
    for (int i = 0; i < row; i++)
    {
        if (board[i][col] == 1)
            return false;
    }

    // Check upper-left diagonal
    for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--)
    {
        if (board[i][j] == 1)
            return false;
    }

    // Check upper-right diagonal
    for (int i = row - 1, j = col + 1; i >= 0 && j < 8; i--, j++)
    {
        if (board[i][j] == 1)
            return false;
    }

    // Safe to place queen
    return true;
}

// Solve the Eight Queens problem using recursion
bool solve(int board[8][8], int row)
{

    // Base case: all 8 queens are placed
    if (row == 8)
        return true;

    // Try placing queen in each column
    for (int col = 0; col < 8; col++)
    {

        if (isSafe(board, row, col))
        {

            // Place queen
            board[row][col] = 1;

            // Recur for next row
            if (solve(board, row + 1))
                return true;

            // Backtracking: remove queen
            board[row][col] = 0;
        }
    }

    // No solution found in this row
    return false;
}

int main()
{

    int board[8][8] = {0}; // Initialize board with 0

    // Start solving from row 0
    if (solve(board, 0))
    {

        // Print the solution
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cout << board[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "No solution exists";
    }

    return 0;
}
