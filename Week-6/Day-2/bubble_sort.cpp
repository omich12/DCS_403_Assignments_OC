// Bubble Sort

#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int array[] = {24, 75, 36, 12, 64};

    for (int i = 0; i < n - 1; i++) // Outer loop to traverse through all elements
    {
        for (int j = 0; j < n - i - 1; j++) // Inner loop to compare adjacent elements
        {
            if (array[j] > array[j + 1]) // If the current element is greater than the next element
            {
                swap(array[j], array[j + 1]); // Swap the elements
            }
        }
    }

    cout << "Sorted array: " << endl;
    for (int i = 0; i < n; i++) // Print the sorted array
    {
        cout << array[i] << " ";
    }
    return 0;
}