// Q4. Print All Elements of an Array Using Recursion
// Print each element of an array recursively.
// Hint:
// Use an index that increments with each recursive call.

#include <iostream>
using namespace std;

void printArray(int arr[], int size, int index)
{
    // Base case
    if (index == size)
        return;

    cout << arr[index] << " ";

    // Recursive call for next index
    printArray(arr, size, index + 1);
}

int main()
{
    int n;

    cout << "Enter the number: ";
    cin >> n;

    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element " << i + 1 << ": ";
        cin >> arr[i];
    }

    printArray(arr, n, 0);
    return 0;
}
