// Print a Half Pyramid Pattern (Using Nested for loops)

#include <iostream>
using namespace std;

int main()
{
    int rows;

    cout << "Enter the number of rows: ";
    cin >> rows;

    // use outer loop for rows
    for (int i = 1; i <= rows; i++)
    {
        // use inner loop to print stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl; // move to next line
    }

    return 0;
}
