// Count Digits of a Number (Using do-while loop)

#include <iostream>
using namespace std;

int main()
{
    int num;
    int count = 0;

    cout << "Enter the numbers: ";
    cin >> num;

    // do-while so even 0 is counted as one digit
    do
    {
        count++;        // increase digit count
        num = num / 10; // remove one digit
    }
    while (num != 0);

    cout << "Number of digits = " << count << endl;

    return 0;
}
