// Write a program to check if a character is a letter, digit, or special character.

// Hint: Use isalpha(), isdigit(), and ispunct() from <cctype>.

// isalpha(ch) → checks if ch is a letter (A–Z, a–z)

// isdigit(ch) → checks if ch is a digit (0–9)

// ispunct(ch) → checks if ch is a special character (like @, #, !, etc.)

#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    if (isalpha(ch))
    {
        cout << ch << " is a letter.";
    }
    else if (isdigit(ch))
    {
        cout << ch << " is a digit.";
    }
    else if (ispunct(ch))
    {
        cout << ch << " is a special character.";
    }
    else
    {
        cout << ch << " is a whitespace or unknown character.";
    }

    return 0;
}
