// Hollow Square Pattern
// Print a square of stars with hollow inside.

#include <iostream>
using namespace std;

int main()
{
    int rows, columns;

    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> columns;

    // Loop for rows
    for (int i = 1; i <= rows; i++)
    {
        // Loop for columns
        for (int j = 1; j <= columns; j++)
        {

            // Border condition
            if (i == 1 || i == rows || j == 1 || j == columns)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
}
