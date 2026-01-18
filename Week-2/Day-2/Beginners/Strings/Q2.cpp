// Write a program to reverse a string.

// Hint: Use reverse(str.begin(), str.end()).
// Use the reverse() function from <algorithm>

// Syntax: reverse(str.begin(), str.end())

#include <iostream>
#include <algorithm> // for reverse()
#include <string>

using namespace std;

int main()
{
    string str;

    cout << "Enter a string: ";
    cin >> str; // for single word input

    reverse(str.begin(), str.end());

    cout << "Reversed string: " << str << endl;

    return 0;
}
