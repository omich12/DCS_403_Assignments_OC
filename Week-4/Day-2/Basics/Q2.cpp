// Q2. Sum of All Elements in a 2×3 Array
// Write a program that calculates and prints the sum of all elements in a 2×3 array.

// Hint:
// Use a sum variable and accumulate values inside nested loops.

#include <iostream>
using namespace std;

int main()
{
    int arr[2][3];
    int sum = 0;

    cout << "Enter the 6 elements:\n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
            sum += arr[i][j];
        }
    }

    cout << "Sum of all elements = " << sum;

    return 0;
}
