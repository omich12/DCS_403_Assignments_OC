// Factorial of a Number (Using for loop)

#include <iostream>
using namespace std;

int main()
{
    int n;
    int fact = 1;

    cout << "Enter a number: ";
    cin >> n;

    // calculate factorial using for loop
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i; // multiply each number
    }

    cout << "Factorial = " << fact << endl;

    return 0;
}
