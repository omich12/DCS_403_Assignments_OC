// Write a C++ program that calculates an employee’s total salary based on a base salary and a bonus percentage.

#include <iostream>
using namespace std;

int main()
{
    int baseSalary = 50000;
    const float bonusPercent = 15;

    // cout << "Enter Base Salary: ";
    // cin >> baseSalary;

    float bonusAmount = baseSalary * (bonusPercent / 100);

    float totalSalary = baseSalary + bonusAmount;

    cout << "Total Salary: " << totalSalary << endl;

    return 0;
}
