// 2. Character Case Alternator
// Convert every alternate character in a string to uppercase, starting with lowercase.

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str); // read full line

    bool toUpper = false; // start with lowercase

    for (int i = 0; i < str.length(); i++)
    {
        if (isalpha(str[i]))
        {
            if (toUpper)
            {
                str[i] = toupper(str[i]);
            }
            else
            {
                str[i] = tolower(str[i]);
            }
            toUpper = !toUpper; // alternate
        }
    }

    cout << str << endl;
    return 0;
}
