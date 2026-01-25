// Defining and Calling a Function
// Write a function add() that takes two integers as parameters and returns their sum.
// Call this function from main() and display the result.

#include <iostream>
using namespace std;

// Function that adds two numbers (parameters)
int add(int a, int b)
{
    return a + b;
}

int main()
{
    int result = add(5, 3); // Function call
    cout << "Sum = " << result << endl;
    
    return 0;
}
