// Q5. Tail-Recursive Power Function
// Use tail recursion to compute a^b.
// Hint:
// Carry the intermediate result as an argument in each recursive call.

#include <iostream>
using namespace std;

// Tail recursive power function
int power(int a, int b, int result)
{
    // Base case
    if (b == 0)
        return result;

    // Tail recursion
    return power(a, b - 1, result * a);
}

int main()
{
    int a, b;

    cout << "Enter the first number: ";
    cin >> a;

    cout << "Enter the second number: ";
    cin >> b;

    cout << "Result: " << power(a, b, 1);
    return 0;
}
