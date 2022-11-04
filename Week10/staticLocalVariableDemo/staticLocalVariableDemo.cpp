// This program uses a static local variable

#include <iostream>

using namespace std;

// Function prototype
void showStatic();

int main()
{
    // Use a loop to call the showStatic() function 5 times
    for(int count = 0; count < 5; count++)
    {
        showStatic();
    }

    return 0;
}

//**************************************************
//* This function keeps track of how many times it
//* has been called by incrementing a static local
//* variable each time it is called
//**************************************************

void showStatic()
{
    // Declare and initialize static local variable
    static int numCalls = 0;

    cout << "This function has been called " << ++numCalls << " times.\n\n";
}