// Q3. Sum of Elements Using a Function
// Write a function that accepts an integer array and returns the sum of its elements.

#include <iostream>
using namespace std;

// Function to calculate sum
int sumArray(int arr[], int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    return sum;
}

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

    cout << "Sum of elements: " << sumArray(arr, n);

    return 0;
}
