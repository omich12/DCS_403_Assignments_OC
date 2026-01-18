// 2. Find the Longest Word in a Sentence
// Find and print the longest word from a sentence.

#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    string str;
    cout << "Enter a sentence: ";
    getline(cin, str);

    string word, longest = "";
    stringstream ss(str);

    while (ss >> word)
    {
        if (word.length() > longest.length())
        {
            longest = word;
        }
    }

    cout << "Longest word: " << longest << endl;
    return 0;
}
