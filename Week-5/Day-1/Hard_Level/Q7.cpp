// Q7. Tail-Recursive Fibonacci
// Rewrite Fibonacci using tail recursion.
// Hint:
// Carry two parameters: current and next Fibonacci number.

#include <iostream>
using namespace std;

// Tail recursive Fibonacci
int fibTail(int n, int a, int b)
{
    // Base case
    if (n == 0)
        return a;

    // Tail recursion
    return fibTail(n - 1, b, a + b);
}

int main()
{
    int n;

    cout << "Enter the number: ";
    cin >> n;

    cout << "Result: " << fibTail(n, 0, 1);
    return 0;
}
