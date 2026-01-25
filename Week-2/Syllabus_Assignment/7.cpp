

#include <iostream>
using namespace std;

int main()
{
    int n;
    double score, highest;

    cout << "Enter the number of students: ";
    cin >> n;

    cout << "Enter score of student 1: ";
    cin >> highest;

    for (int i = 2; i <= n; i++)
    {
        cout << "Enter score of student " << i << ": ";
        cin >> score;
        if (score > highest)
            highest = score;
    }

    cout << "Highest score is: " << highest << endl;
    return 0;
}


