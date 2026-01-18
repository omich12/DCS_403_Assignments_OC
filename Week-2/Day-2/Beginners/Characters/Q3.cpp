// Write a program to count the number of vowels and consonants in a given string.

// Hint: Use isalpha() and check characters 'a', 'e', 'i', 'o', 'u'.

#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main()
{
    string str;
    int vowels = 0, consonants = 0;

    cout << "Enter a string: ";
    getline(cin, str); // read the entire line including spaces

    for (int i = 0; i < str.length(); i++)
    {
        char ch = tolower(str[i]); // convert to lowercase for easy comparison

        if (isalpha(ch))
        // check if it is a letter
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
    }

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;

    return 0;
}
