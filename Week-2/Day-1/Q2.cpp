// Write a program to find the greater of two numbers.

#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "Enter the two numbers: ";
    cin >> a >> b;

    if (a > b)
    {
        cout << a << " is greater than " << b << endl;
    }
    else
    {
        cout << b << " is greater than " << a << endl;
    }

    return 0;
}
