#include <iomanip>

#include <iostream>

using namespace std;

void patientCharges(int, double, double, double);

void patientCharges(double, double);

int main() {

// Declare Variables
    int choice, days;
    double rate, charges, medicine, services;

// Get User Input
    cout << "Was the patient admitted as in-patient or out-patient?\n";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Number of days spent in the hospital: \n";
            cin >> days;
            cout << "Daily per-day base rate for stay: \n";
            cin >> rate;
            cout << "Charges for hospital services (labs, x-rays, etc.):\n";
            cin >> charges;
            cout << "Charges for medication: ";
            cin >> medicine;
            patientCharges(days, rate, charges, medicine);
            break;

        case 2:
            cout << "Charges for hospital services (labs, x-rays, etc.):\n";
            cin >> services;
            cout << "Charges for medication:\n";
            cin >> medicine;
            patientCharges(services, medicine);
    }

    return 0;
}

void patientCharges(int days, double rate, double charges, double medicine) {
    double total = (days * rate) + charges + medicine;
    cout << setprecision(2) << fixed;
    cout << "The total cost of the hospital stay was: " << total << endl;

}

void patientCharges(double services, double medicine) {
    double total = services + medicine;
    cout << setprecision(2) << fixed;
    cout << "The total cost of the hospital stay was: " << total << endl;
}

void
