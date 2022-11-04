// Weekly gross pay using overloaded functions
#include <iostream>
#include <iomanip>

using namespace std;

// Function prototypes
double calcGrossPay(double, double);
double calcGrossPay(double);

int main()
{
    // Declare variables
    int menuChoice;
    double hourlyRate, hoursWorked;
    double annualSalary;
    double grossWeeklyPay;

    // Menu
    cout << "Do you want to calculate the weekly pay of:\n";
    cout << "1:  Hourly Employee\n";
    cout << "2:  Salaried Employee\n";
    cin >> menuChoice;

    switch(menuChoice)
    {
        case 1: cout << "\nWhat is the employee's hourly pay rate? ";
                cin >> hourlyRate;
                cout << "How many hours did the employee work? ";
                cin >> hoursWorked;
                // Call function to calc gross pay
                grossWeeklyPay = calcGrossPay(hourlyRate, hoursWorked);
                break;

        case 2: cout << "\nWhat is the employee's annual salary? ";
                cin >> annualSalary;
                // Call function to calc gross pay
                grossWeeklyPay = calcGrossPay(annualSalary);
                break;
    }

    // Display final output
    cout << setprecision(2) << fixed << showpoint;
    cout << "\nThe employee's weekly gross pay amount is $" << grossWeeklyPay << endl;


    return 0;
}

// 2-parameter calcGrossPay function for hourly employees
double calcGrossPay(double rate, double hrs)
{
    return rate * hrs;
}

// 1-parameter calcGrossPay function for salaried employees
double calcGrossPay(double annual)
{
    return annual/52;
}
