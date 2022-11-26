//
// Created by Muhammed Kasem on 11/21/22.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int nums[10];

    for (int count = 0; count < 10; count++) {
        cout << "Enter a value ";
        cin >> nums[count];
    }

    for (int count = 0; count < 10; count++) {
        cout << nums[count] << " ";
    }

    // Backwards
     for (int count = 9; count >= 0; count--) {
        cout << nums[count] << " ";
    }
    return 0;

}