#include <iostream>

using namespace std;

int main()
{
    double sales = 95000;
    const double state_tax_rate = 0.04;
    const double county_tax_rate = 0.02;
    double state_tax = state_tax_rate * sales;
    double county_tax = county_tax_rate * sales;
    double total_tax = state_tax + county_tax;

std:
    cout << "State Tax is $" << state_tax << endl
         << "County Tax is $" << county_tax << endl
         << "Total Tax is $" << total_tax;
    return 0;
}