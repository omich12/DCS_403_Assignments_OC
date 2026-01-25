
#include <iostream>
#include <cmath>

using namespace std;

// investment = initial amount
// rate = yearly interest rate
// years = number of years

double futureInvestmentValue(double investment, double rate, int years)
{
    return investment * pow(1 + rate, years);
    // formula: FV = investment × (1 + rate)^years
}

int main()
{
    cout << futureInvestmentValue(1000, 0.05, 5); // Function call
    return 0;
}


