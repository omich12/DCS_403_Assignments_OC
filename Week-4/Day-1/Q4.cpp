// Linear Search (Definition):
// Checks each element one by one.
// Works on unsorted or sorted arrays.

// Time Complexity:
// Best case: O(1) (element found at first position)
// Worst case: O(n) (element at end or not present)
// Average case: O(n)

// When to Use:
// When array is small or unsorted.

// Q4. Linear Search
// Search for a number in an array using linear search.

#include <iostream>
using namespace std;

int main()
{
    int n, key;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "Enter the element to search: ";
    cin >> key;

    // Linear Search
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            cout << "Element found at index " << i << ".";
            return 0;
        }
    }

    cout << "Element not found!";

    return 0;
}
