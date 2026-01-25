// Passing Arguments by Reference
// Write a function swapValues(int &a, int &b) that swaps two numbers using references.

#include <iostream>
using namespace std;

// Swaps values using reference
void swapValues(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 10, y = 20;
    swapValues(x, y);
    cout << "x = " << x << ", y = " << y << endl;
    return 0;
}
