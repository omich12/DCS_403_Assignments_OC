// Write a program to assign grades based on marks (A, B, C, F).

#include <iostream>
using namespace std;

int main()
{
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;

    if (marks >= 80)
    {
        cout << "Your grade is A.😃" << endl;
    }
    else if (marks >= 60 && marks <= 79)
    {
        cout << "Your grade is B.😀" << endl;
    }
    else if (marks >= 40 && marks <= 59)
    {
        cout << "Your grade is C.😕" << endl;
    }
    else
    {
        cout << "Sorry! Your grade is F.😞" << endl;
    }

    return 0;
}




// From switch case:

#include <iostream>
using namespace std;

int main()
{
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;

    switch (marks / 10)
    {
    case 10:
    case 9:
    case 8:
        cout << "Your grade is A.😃";
        break;
    case 7:
    case 6:
        cout << "Your grade is B.😀";
        break;
    case 5:
    case 4:
        cout << "Your grade is C.😕";
        break;
    default:
        cout << "Sorry! Your grade is F.😞";
    }
}