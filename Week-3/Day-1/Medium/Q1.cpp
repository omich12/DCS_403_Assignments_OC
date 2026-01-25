// Reverse Digits of a Number (Using while loop)

#include <iostream>
using namespace std;

int main()
{
    int num;
    int reverse = 0;
    int digit;

    cout << "Enter the numbers: ";
    cin >> num;

    // repeat until the number becomes 0
    while (num != 0)
    {
        digit = num % 10;               // get the last digit
        reverse = reverse * 10 + digit; // build the reversed number
        num = num / 10;                 // remove the last digit
    }

    cout << "Reversed number = " << reverse << endl;

    return 0;
}
