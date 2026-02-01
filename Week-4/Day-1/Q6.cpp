// Array Sorting Algorithms

// Selection Sort (Definition):
// Repeatedly selects the smallest element and swaps it to its correct position.
// Performs well on small arrays, but inefficient for large ones.

// Time Complexity:
// Best case: O(n²)
// Worst case: O(n²)
// Average case: O(n²)

// When to Use:
// When memory usage must be minimal.
// Simple and predictable behavior.

// Q6. Selection Sort
// Sort an array in ascending order using selection sort.

// Hint:
// Find the minimum element in the unsorted portion and swap with the first element.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Selection Sort
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        // Swaping
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }

    cout << "Sorted array are: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
