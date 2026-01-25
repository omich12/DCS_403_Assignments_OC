
#include <iostream>

using namespace std;

// Function to compute the series:
// m(i) = 1/2 + 2/3 + 3/4 + ... + i/(i+1)
double m(int i)
{
    double sum = 0; // Variable to store the total sum of the series

    // Loop from 1 to i
    for (int j = 1; j <= i; j++)
    {
        // Add each term j/(j+1) to the sum
        sum += (double)j / (j + 1);
    }

    // This return the final sum
    return sum;
}

int main()
{
    // Call the function with i = 5 and display the result
    cout << m(5);
    return 0;
}

