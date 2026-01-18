// 4. Remove Vowels from a String
// Remove all vowels from a string.

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str, result = "";

    cout << "Enter a string: ";
    getline(cin, str);

    for (char ch : str)
    {
        char c = tolower(ch);
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u')
        {
            result += ch;
        }
    }

    cout << result << endl;
    return 0;
}
