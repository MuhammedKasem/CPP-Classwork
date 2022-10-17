// Week 3 Part 2 HW Muhammed Kasem Box Office

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {

  // Declarations
  string movieName;
  double adultTicketSold, childTicketSold, seniorTicketSold, grossBoxOffice;
  double distributorProfit, parentProfit, theatreProfit;
  const int ADULT_TICKET_PRICE = 8;
  const int CHILD_TICKET_PRICE = 4;
  const double SENIOR_TICKET_PRICE = 6.75;
  const double THEATRE_CUT = .215;
  const double DISTRIBUTOR_CUT = .75;
  const double PARENT_CUT = .25;

  // Gather user inputs
  cout << "Enter the movie title: \n";
  getline(cin, movieName);
  cout << "Enter the number of adult tickets sold: " << endl;
  cin >> adultTicketSold;
  cout << "Enter the number of child tickets sold: " << endl;
  cin >> childTicketSold;
  cout << "Enter the number of senior citizen tickets sold: " << endl;
  cin >> seniorTicketSold;

  // Calculations
  grossBoxOffice = (adultTicketSold * ADULT_TICKET_PRICE) + (childTicketSold * CHILD_TICKET_PRICE) + (seniorTicketSold * SENIOR_TICKET_PRICE);
  theatreProfit = grossBoxOffice * THEATRE_CUT;
  distributorProfit = (grossBoxOffice - theatreProfit) * DISTRIBUTOR_CUT; // Here you have to subtract the theatre profit from the gross profit before doing this calculations!
  parentProfit = (grossBoxOffice - theatreProfit) * PARENT_CUT; // You also have to subtract the theatre profit here for the same reason!

  // Output
  cout << "Movie Title: " << movieName << endl;
  cout << "-------------------------------" << endl;
  cout << "Adult Ticket Sales:           " << setw(12) << adultTicketSold << endl;
  cout << "Child Ticket Sales:           " << setw(12) << childTicketSold << endl;
  cout << "Senior Ticket Sales:          " << setw(12) << seniorTicketSold << endl;
  cout << setprecision(2) << fixed;
  cout << "Gross Box Office:             " << setw(12) << grossBoxOffice << endl;
  cout << "Distributor Profit            " << setw(12) << distributorProfit << endl;
  cout << "Parent Company Profit         " << setw(12) << parentProfit << endl;
  cout << "Theater Profit:               " << setw(12) << theatreProfit << endl;

  return 0;
}
