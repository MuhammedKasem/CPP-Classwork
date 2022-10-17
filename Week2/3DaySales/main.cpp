// This program asks for sales figures for 3 days. The total
// sales are calculated and displayed in a table.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double day1, day2, day3, total;

    // Get the sales for each day.
    cout << "Enter the sales for day 1: ";
    cin >> day1;
    cout << "Enter the sales for day 2: ";
    cin >> day2;
    cout << "Enter the sales for day 3: ";
    cin >> day3;

    // Calculate the total sales.
    total = day1 + day2 + day3;

    // Display the sales figures.
    cout << setprecision(2) << fixed;
    cout << "\nSales Figures\n";
    cout << "----------------\n";
    cout << "Day 1: " << setw(12) << day1 << endl;
    cout << "Day 2: " << setw(12) << day2 << endl;
    cout << "Day 3: " << setw(12) << day3 << endl;
    cout << "Total: " << setw(12) << total << endl;

    return 0;
}
