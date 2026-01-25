// Sum of First N Natural Numbers (Using for loop)

#include <iostream>
using namespace std;

int main()
{
    int n;
    int sum = 0;

    cout << "Enter N (Natural Numbers): ";
    cin >> n;

    // for loop to add numbers from 1 to N
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i; // add i to sum
    }

    cout << "Sum = " << sum << endl;

    return 0;
}
