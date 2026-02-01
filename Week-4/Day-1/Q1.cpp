// Q1. Store and Display 5 Integers
// Declare an array of 5 integers. Take input from the user and print all elements.

#include <iostream>
using namespace std;

int main()
{
    int arr[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the element " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "Array elements are: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
