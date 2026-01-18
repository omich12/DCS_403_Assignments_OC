// 1. Character Frequency Counter
// Count how many times each alphabet appears in a string (ignore case).

// Hint: Use an array of size 26 and tolower().

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    int freq[26] = {0}; // for a-z

    cout << "Enter a string: ";
    cin >> str; // for single word input

    for (int i = 0; i < str.length(); i++)
    {
        char ch = tolower(str[i]);
        if (ch >= 'a' && ch <= 'z')
        {
            freq[ch - 'a']++;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > 0)
        {
            cout << char(i + 'a') << ":" << freq[i] << "  ";
        }
    }

    cout << endl;
    return 0;
}
