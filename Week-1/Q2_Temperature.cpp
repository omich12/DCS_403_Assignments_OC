// Write a C++ program that converts a temperature value from Celsius to Fahrenheit.

#include <iostream>

using namespace std;

int main()
{
    float celsius;

    const float nine = 9.0; // constants
    const float five = 5.0;
    const float thirtyTwo = 32.0;

    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    // convert Celsius to Fahrenheit
    float fahrenheit = (celsius * nine / five) + thirtyTwo;

    cout << "Fahrenheit: " << fahrenheit << endl;

    return 0;
}
