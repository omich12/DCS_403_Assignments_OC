// Write a program to check if a string is a palindrome.

// Hint: Compare the string with its reversed version.

#include <iostream>
#include <algorithm> // for reverse()
#include <string>

using namespace std;

int main()
{
    string str, reversedStr;

    cout << "Enter a string: ";
    cin >> str; // single word input

    reversedStr = str;
    reverse(reversedStr.begin(), reversedStr.end());

    if (str == reversedStr)
    {
        cout << "The string is a palindrome." << endl;
    }
    else
    {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}
