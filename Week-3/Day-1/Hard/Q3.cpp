// Floyd’s Triangle Pattern (Nested for loops)

#include <iostream>
using namespace std;

int main()
{
    int n, num = 1;

    cout << "Enter the number of rows: ";
    cin >> n;

    // use outer loop for rows
    for (int i = 1; i <= n; i++)
    {
        // use inner loop for printing numbers
        for (int j = 1; j <= i; j++)
        {
            cout << num << " ";
            num++; // increase the number
        }
        cout << endl;
    }

    return 0;
}
