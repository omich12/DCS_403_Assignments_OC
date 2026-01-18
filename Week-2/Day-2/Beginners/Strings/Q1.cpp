// Write a program to find the length of a string.

// Hint: Use length() or size() function.

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;

    cout << "Enter a string: ";
    cin >> str; // for single word input

    cout << "Length of string: " << str.length() << endl;

    return 0;
}
