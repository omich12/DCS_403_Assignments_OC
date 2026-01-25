// Inline Functions
// Create an inline function cube(int n) that returns the cube of a number.

#include <iostream>
using namespace std;

// Inline function for cube
inline int cube(int n)
{
    return n * n * n;
}

int main()
{
    cout << "Cube = " << cube(3) << endl;
    return 0;
}
