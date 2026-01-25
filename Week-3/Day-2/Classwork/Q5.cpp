// Default Arguments
// Write a function power(int base, int exponent = 2) that calculates base raised to the given power.
// If the exponent is not provided, assume it is 2.

#include <iostream>
using namespace std;

// Exponent has default value 2
int power(int base, int exponent = 2)
{
    int result = 1;
    for (int j = 1; j <= exponent; j++)
    {
        result = result * base;
    }
    return result;
}

int main()
{
    cout << power(5) << endl;
    cout << power(2, 3) << endl;
    return 0;
}
