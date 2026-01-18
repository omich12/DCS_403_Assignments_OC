// Write a program to concatenate two strings.

// Hint: Use + operator or append() function.
// Use + operator or append() to join strings

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str1, str2, result;

    cout << "Enter the first string: ";
    cin >> str1;

    cout << "Enter the second string: ";
    cin >> str2;

    result = str1 + " " + str2; // concatenate with space

    cout << "Concatenated String: " << result << endl;

    return 0;
}
