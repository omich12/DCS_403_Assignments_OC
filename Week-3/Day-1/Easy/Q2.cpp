// Print Multiplication Table (Using do-while loop)

#include <iostream>
using namespace std;

int main()
{
    int num;
    int i = 1;

    cout << "Enter a number: ";
    cin >> num;

    // do-while loop to print table up to 10
    do
    {
        cout << num << " x " << i << " = " << num * i << endl;
        i++; // increase the counter
    }
    while (i <= 10);

    return 0;
}
