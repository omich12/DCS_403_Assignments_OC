// Static, Global, and Static Local Variables
// Demonstrate the difference between global, local, and static local variables.

#include <iostream>
using namespace std;

// Global variable
int global = 10;

void staticExample()
{
    static int count = 0;
    count++;
    cout << "Static count = " << count << endl;
}

int main()
{
    cout << "Global variable = " << global << endl;
    staticExample();
    staticExample();
    return 0;
}
