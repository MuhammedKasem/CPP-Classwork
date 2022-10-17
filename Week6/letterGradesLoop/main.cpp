// This program uses a loop to compute letter grades for multiple students.

#include <iostream>

using namespace std;

int main()
{
    // Create constants to hold minimum score for each letter grade
    const int MIN_A_SCORE = 90,
              MIN_B_SCORE = 80,
              MIN_C_SCORE = 70,
              MIN_D_SCORE = 60,
              MIN_POSSIBLE_SCORE = 0;

    int numStudents;          // total number of students
    int currentStudent;       // current student being processed
    int testScore;            // current student's test score
    char grade;               // current student's letter grade
    bool validScore = true;   // used for input validation

    // Set the number of students you want to enter grades for
    cout << "Enter the number of students: \n"; 
    cin >> numStudents;

    // Initialize the loop control variable (very important)
    currentStudent = 1;

    // Loop once for each student
    while(currentStudent <= numStudents)
    {
        // Get the current student's numeric score
        cout << "\nEnter the numeric score for student #" << currentStudent << ": ";
        cin >> testScore;

        // Determine the letter grade
        if(testScore >= MIN_A_SCORE)
            grade = 'A';
        else if(testScore >= MIN_B_SCORE)
            grade = 'B';
        else if (testScore >= MIN_C_SCORE)
            grade = 'C';
        else if (testScore >= MIN_D_SCORE)
            grade = 'D';
        else if (testScore >= MIN_POSSIBLE_SCORE)
            grade = 'F';
        else
            validScore = false;    // The score entered was < 0

        // Display the letter grade
        if(validScore)
            cout << "The letter grade is " << grade << ".\n";
        else
            cout << "The score cannot be below zero.\n";

        // Increment the loop control variable (very important)
        currentStudent++;
        // Reset flag variable back to true
        validScore = true;
    }
    return 0;
}
