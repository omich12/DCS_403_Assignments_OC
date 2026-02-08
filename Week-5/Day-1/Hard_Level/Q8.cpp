// Q8. Reverse a String Using Recursion
// Reverse a given string using recursion.
// Hint:
// Swap characters at two indices, then recursively move inward.

#include <iostream>
using namespace std;

void reverseString(string &s, int start, int end)
{
    // Base case
    if (start >= end)
        return;

    // Swap characters
    swap(s[start], s[end]);

    // Recursive call
    reverseString(s, start + 1, end - 1);
}

int main()
{
    string s;

    cout << "Enter anything: ";
    cin >> s;

    reverseString(s, 0, s.length() - 1);
    cout << s;
    return 0;
}
