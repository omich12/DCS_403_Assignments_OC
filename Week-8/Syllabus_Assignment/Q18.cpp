
#include <iostream>
#include <deque>
#include <algorithm>
#include <cstdlib>
#include <ctime>

using namespace std;

double randomNum()
{
    return rand() % 100; // random number between 0 and 99
}

int main()
{
    // Seed the random number generator
    srand(time(0));

    // Create a deque and fill it with random numbers
    deque<double> d = {1.3, 2.4, 4.5, 6.7, 9.0};
    deque<double> d1 = {1.3, 2.4, 4.5, 6.7, 9.0};

    // Fill the deque with random numbers using generate and generate_n
    // fills all elements with random numbers
    generate(d.begin(), d.end(), randomNum);

    // fills the first n = 5 elements with random numbers
    generate_n(d1.begin(), 5, randomNum);

    for (double x : d)
    {
        cout << x << " ";
    }
    cout << endl;

    for (double x : d1)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}


