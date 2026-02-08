// Q6. Fibonacci Number (Recursive)
// Compute the nth Fibonacci number using recursion.
// Hint:
// Use the relation: Fib(n) = Fib(n-1) + Fib(n-2).

#include <iostream>
using namespace std;

int fibonacci(int n)
{
    // Base cases
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    // Recursive case
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n;

    cout << "Enter the number: ";
    cin >> n;

    cout << "Result: " << fibonacci(n);
    return 0;
}
