// Diamond Pattern
// Combine full and inverted pyramids to make a diamond.

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the value of n: ";
    cin >> n;

    // Upper half of diamond
    for (int i = 1; i <= n; i++)
    {
        for (int space = 1; space <= n - i; space++)
        {
            cout << " ";
        }

        for (int star = 1; star <= 2 * i - 1; star++)
        {
            cout << "*";
        }

        cout << endl;
    }

    // Lower half of diamond
    for (int i = n - 1; i >= 1; i--)
    {
        for (int space = 1; space <= n - i; space++)
        {
            cout << " ";
        }

        for (int star = 1; star <= 2 * i - 1; star++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
