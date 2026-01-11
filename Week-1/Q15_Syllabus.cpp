// Write a program that prompts the user to enter two points (x1, y1) and (x2, y2) and displays their distance.

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x1, y1, x2, y2;

    cout << "Enter x1 and y1: ";
    cin >> x1 >> y1;

    cout << "Enter x2 and y2: ";
    cin >> x2 >> y2;

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    cout << "Distance is: " << distance << endl;

    return 0;
}



