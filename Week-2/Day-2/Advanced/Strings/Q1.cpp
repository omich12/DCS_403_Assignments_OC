// 1. Count Words in a Sentence
// Count how many words are in a sentence.

// Hint: Count spaces while ignoring multiple consecutive spaces.

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    cout << "Enter a sentence: ";
    getline(cin, str);

    int words = 0;
    bool inWord = false;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != ' ')
        {
            if (!inWord)
            {
                words++;
                inWord = true;
            }
        }
        else
        {
            inWord = false;
        }
    }

    cout << "Number of words: " << words << endl;
    return 0;
}
