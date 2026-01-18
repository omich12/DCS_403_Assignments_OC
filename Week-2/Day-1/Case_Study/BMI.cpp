// C++ Program to Compute Body Mass Index (BMI)

// Write a C++ program that calculates a person’s Body Mass Index (BMI) based on their weight and height,
// and then classifies the BMI according to standard health categories.

#include <iostream>
// #include <iomanip>
using namespace std;

int main()
{
    double weight, height;

    cout << "Enter your weight (kg): ";
    cin >> weight;

    cout << "Enter your height (m): ";
    cin >> height;

    double bmi = weight / (height * height);

    // cout << fixed << setprecision(2);
    cout << "Your BMI is: " << bmi << endl;

    if (bmi < 18.5)
    {
        cout << "Category: Underweight";
    }
    else if (bmi < 25.0)
    {
        cout << "Category: Normal weight";
    }
    else if (bmi < 30.0)
    {
        cout << "Category: Overweight";
    }
    else
    {
        cout << "Category: Obesity";
    }

    return 0;
}
