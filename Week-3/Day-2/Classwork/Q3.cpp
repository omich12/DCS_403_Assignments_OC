// Passing Arguments by Value
// Write a function square(int n) that prints the square of a number.
// Verify that the original number in main() does not change.

#include <iostream>
using namespace std;

// Function receives a copy of the number
void square(int n)
{
    cout << "Square inside the function = " << n * n << endl;
}

int main()
{
    int num = 4;
    square(num);
    cout << "Number in main = " << num << endl;
    return 0;
}
