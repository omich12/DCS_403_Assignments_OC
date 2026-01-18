// Write a program to convert lowercase letters to uppercase and vice versa.

// Hint: Use toupper() and tolower().

#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    if (isalpha(ch))
    // check if it's a letter
    {
        cout << "Uppercase: " << (char)toupper(ch) << endl;
        cout << "Lowercase: " << (char)tolower(ch) << endl;
    }
    else
    {
        cout << ch << " is not a letter." << endl;
    }

    return 0;
}
