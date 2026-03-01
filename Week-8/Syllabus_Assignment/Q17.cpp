#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    double arr[5] = {1.3, 2.4, 4.5, 6.7, 9.0};
    double arr1[5] = {1.3, 2.4, 4.5, 6.7, 9.0};

    // Fill the array with a specific value
    fill(arr, arr + 3, 5.5); // first 3 elements
    fill_n(arr1, 4, 6.9);    // first 4 elements

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;

    return 0;
}



