// Write a program to check if a number is:

// Positive and Even
// Positive and Odd
// Negative
// Zero

#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number > 0)
    {
        if (number % 2 == 0)
        {
            cout << "The number is Positive and Even." << endl;
        }
        else
        {
            cout << "The number is Positive and Odd." << endl;
        }
    }
    else if (number < 0)
    {
        cout << "The number is Negative." << endl;
    }
    else
    {
        cout << "The number is Zero." << endl;
    }
}