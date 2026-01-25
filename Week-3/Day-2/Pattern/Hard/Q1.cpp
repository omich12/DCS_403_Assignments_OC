// Full Pyramid
// Print a centered pyramid of stars.

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the value of n: ";
    cin >> n;

    // Loop for rows
    for (int i = 1; i <= n; i++)
    {
        // Print leading spaces
        for (int space = 1; space <= n - i; space++)
        {
            cout << " ";
        }

        // Print stars
        for (int star = 1; star <= 2 * i - 1; star++)
        {
            cout << "*";
        }

        // Move to next line
        cout << endl;
    }

    return 0;
}
