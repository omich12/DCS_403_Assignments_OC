// Binary Search (Definition):
// Efficient searching on sorted arrays only.
// Repeatedly divides the search space in half.

// Time Complexity:
// Best case: O(1)
// Worst case: O(log n)
// Average case: O(log n)

// When to Use:
// When the array is sorted.
// When fast searching is required.

// Q5. Binary Search
// Search for an element using binary search in a sorted array.

// Hint:
// Use mid = (low + high)/2 to compare and adjust search boundaries.

#include <iostream>
using namespace std;

int main()
{
    int n, key;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter sorted array elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the element to search: ";
    cin >> key;

    int low = 0, high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == key)
        {
            cout << "Element found at index " << mid << ".";
            return 0;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    cout << "Element not found!";

    return 0;
}
