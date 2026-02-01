// Q2. Find the Maximum Element in an Array
// Input n elements and find the largest value.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements (size): ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element " << i + 1 << ": ";
        cin >> arr[i];
    }

    int max = arr[0]; // assume first element is maximum

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    cout << "Maximum element in an array (largest value) is: " << max;

    return 0;
}
