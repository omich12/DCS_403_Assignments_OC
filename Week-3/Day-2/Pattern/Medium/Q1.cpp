// Inverted Right-Angled Triangle

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the value of n: ";
    cin >> n;

    // Loop for rows
    for (int i = n; i >= 1; i--)
    {
        // Loop for stars in each row
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        // Move to next line
        cout << endl;
    }

    return 0;
}
