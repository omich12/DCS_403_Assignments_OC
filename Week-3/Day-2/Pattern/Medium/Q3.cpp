// Alphabet Pattern
// Use ASCII values of characters ('A' + j).

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the value of n: ";
    cin >> n;

    // Loop for rows
    for (int i = 0; i < n; i++)
    {
        // Loop for alphabets
        for (int j = 0; j <= i; j++)
        {
            cout << char('A' + j) << " ";
        }

        // Move to next line
        cout << endl;
    }

    return 0;
}
