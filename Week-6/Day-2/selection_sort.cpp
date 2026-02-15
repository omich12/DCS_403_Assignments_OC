// Selection Sort

#include <iostream>
using namespace std;

// Function to perform selection sort
void selectionSort(int arr[], int n)
{
    // Traverse through all array elements
    for (int i = 0; i < n - 1; i++)
    {
        // Find the minimum element in unsorted array

        int minIndex = i; // Assume the minimum is the first element

        for (int j = i + 1; j < n; j++)  // Compare the current element with the minimum
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;  // Update the index of the minimum element
            }
        }
        // Swap the found minimum element with the first element
        swap(arr[i], arr[minIndex]);
    }
}

// Function to print an array
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)  // Print each element of the array
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {64, 25, 12, 22, 11}; // Sample array to be sorted
    
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements in the array

    cout << "Original array: \n";
    printArray(arr, n); // Print the original array

    selectionSort(arr, n); // Sort the array using selection sort

    cout << "Sorted array: \n";
    printArray(arr, n); // Print the sorted array

    return 0;
}