// Insertion Sort

#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int array[] = {12, 46, 3, 53, 19};

    for (int i = 1; i < n; i++) // Start from the second element
    {
        int key = array[i]; // The current element to be compared
        int j = i - 1;      // The index of the last sorted element

        // Move elements of array[0..i-1], that are greater than key,
        // to one position ahead of their current position
        while (j >= 0 && array[j] > key)
        {
            array[j + 1] = array[j]; // Shift the element one position to the right
            j = j - 1;               // Move to the previous element
        }
        array[j + 1] = key; // Place the key in its correct position
    }

    // Print the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    
    return 0;
}
