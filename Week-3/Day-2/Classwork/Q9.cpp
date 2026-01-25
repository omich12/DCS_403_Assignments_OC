// Constant Reference Parameters
// Write a function display(const string &msg) that takes a constant reference to a string and prints it.

#include <iostream>
#include <string>

using namespace std;

// Constant reference prevents modification
void display(const string &msg)
{
    cout << msg << endl;
}

int main()
{
    display("Hello, I am Omi and I am learning C++ functions!");

}
