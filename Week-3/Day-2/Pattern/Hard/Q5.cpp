// Pascal’s Triangle
// Pascal’s Triangle is a triangular array of numbers in which each number
// is the sum of the two numbers directlyabove it in the previous row.

// It starts with a 1 at the top, and each row represents the coefficients of the binomial expansion of ((a + b)^n).

#include <iostream>
using namespace std;

// Function to calculate factorial
// long long is used because factorial values grow very fast, and int cannot store such large numbers safely.

long long factorial(int n)
{
    long long fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

// Function to calculate nCr
long long nCr(int n, int r)
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main()
{
    int n;

    cout << "Enter the value of n: ";
    cin >> n;

    // Loop for rows
    for (int i = 0; i < n; i++)
    {
        // Print leading spaces
        for (int space = 1; space <= n - i; space++)
        {
            cout << " ";
        }

        // Print values using nCr
        for (int j = 0; j <= i; j++)
        {
            cout << nCr(i, j) << " ";
        }

        cout << endl;
    }

    return 0;
}
