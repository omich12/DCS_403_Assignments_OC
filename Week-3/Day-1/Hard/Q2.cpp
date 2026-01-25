// Print a Multiplication Table (1–10) (Using Nested Loops)

#include <iostream>
using namespace std;

int main()
{

    // use outer loop for the table numbers (1 to 10)
    for (int i = 1; i <= 10; i++)
    {
        cout << "\nTable of " << i << endl;

        // use inner loop for multiplication (1 to 10)
        for (int j = 1; j <= 10; j++)
        {
            cout << i << " x " << j << " = " << i * j << endl;
        }
    }

    return 0;
}
