// 2. Distance Between Two Points
// Find the distance between two points ((x_1, y_1)) and ((x_2, y_2)).

// Formula Used:
// [ \text{Distance} = \sqrt{(x_2 - x_1)^2 + (y_2 - y_1)^2} ]

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x1, y1, x2, y2;

    cout << "Enter the coordinates of first point (x1 y1): ";
    cin >> x1 >> y1;

    cout << "Enter the coordinates of second point (x2 y2): ";
    cin >> x2 >> y2;

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    cout << "Distance between points = " << distance << endl;

    return 0;
}
