// The gcd(m, n) can also be defined recursively as follows:
// ● If m % n is 0, gcd (m, n) is n.
// ● Otherwise, gcd(m, n) is gcd(n, m % n).

// Write a recursive function to find the GCD and then write a test program that computes
// gcd(24, 16) and gcd(255, 25).

#include <iostream>
using namespace std;

// Recursive function to find the GCD of two numbers
int gcd(int m, int n)
{
    if (m % n == 0) // If m is divisible by n, then n is the GCD
        return n;
    else
        return gcd(n, m % n); // Otherwise, call the function again with gcd(n, m % n).
                              // This continues the process until we find a case where m % n is 0
                              // at which point we will have found the GCD.
}

int main()
{
    // Testing the gcd function with the given numbers
    cout << "gcd(24, 16) = " << gcd(24, 16) << endl;
    cout << "gcd(255, 25) = " << gcd(255, 25) << endl;

    return 0;
}



