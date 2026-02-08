// Q10. Check if a String is Palindrome (Recursive)
// Write a recursive function to check if a string is a palindrome.
// Hint:
// Compare start and end characters; then recurse inward.

#include <iostream>
using namespace std;

bool isPalindrome(string s, int start, int end)
{
    // Base case
    if (start >= end)
        return true;

    // If characters don't match
    if (s[start] != s[end])
        return false;

    // Recursive call
    return isPalindrome(s, start + 1, end - 1);
}

int main()
{
    string s;

    cout << "Enter anything: ";
    cin >> s;

    if (isPalindrome(s, 0, s.length() - 1))
        cout << "Palindrome!";
    else
        cout << "Not Palindrome!";

    return 0;
}
