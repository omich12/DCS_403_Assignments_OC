// C++ Program to Check Leap Year

// Write a C++ program to check whether a given year is a leap year or not.
// A leap year is a year that has 366 days instead of 365 — the extra day is added to February (making it 29 days).

#include <iostream>
using namespace std;

int main()
{
    int year;

    cout << "Enter a year: ";
    cin >> year;

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
    {
        cout << year << " is a leap year.";
    }
    else
    {
        cout << year << " is not a leap year.";
    }

    return 0;
}
