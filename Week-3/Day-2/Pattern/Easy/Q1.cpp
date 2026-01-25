// Solid Square of Stars

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

        // Loop for columns
        for (int j = 1; j <= n; j++)
        {
            cout << "*";
        }

        // Move to next line after each row
        cout << endl;
    }

    return 0;
}
