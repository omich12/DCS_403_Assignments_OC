// Array Sorting Algorithms

// Bubble Sort (Definition):
// Compares adjacent elements and swaps them if out of order.
// Simple but slow for large datasets.

// Time Complexity:
// Best case: O(n) (when optimized with early-stop)
// Worst case: O(n²)
// Average case: O(n²)

// When to Use:
// When teaching sorting basics.
// When the array is nearly sorted.

// Q7. Bubble Sort
// Sort an array in ascending order using bubble sort.

// Hint:
// Swap adjacent elements if they are in the wrong order.
// Repeat until no swaps occur.

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

    // Bubble Sort
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Sorted array are: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
