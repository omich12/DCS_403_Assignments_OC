// Write a function that finds the smallest element in an array of integers.

// Using given Function header:
// double min(double array[], int size)

// double min(double array[], int size)
// {
//     // The first element is assumed to be the smallest
//     double smallest = array[0];

//     // The loop compares each element with the current smallest value
//     for (int i = 1; i < size; i++)
//     {
//         if (array[i] < smallest)
//         {
//             smallest = array[i];
//         }
//     }

//     return smallest; // The smallest value is returned
// }

#include <iostream>
using namespace std;

// Function to find the minimum value
double min(double array[], int size)
{
    // The first element is assumed to be the smallest
    double smallest = array[0];

    // The loop compares each element with the current smallest value
    for (int i = 1; i < size; i++)
    {
        if (array[i] < smallest)
        {
            smallest = array[i];
        }
    }

    return smallest; // The smallest value is returned
}

int main()
{
    double numbers[10];

    // cout << "Enter 10 numbers:" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter the element " << i + 1 << ": ";
        cin >> numbers[i];
    }

    cout << "Minimum value is: " << min(numbers, 10) << endl;
    return 0;
}
