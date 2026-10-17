// copyright (c) 2026 all rights reserved
// created by : adrian student
// Date : 17th OCT 2026
// This program asks the user for an integer and then
// tells the user if the integer entered is positive,
// negative or equal to 0
#include <iostream>


int main() {
    // declare variables
    int userNumber;


    // get the user number
    std::cout << "Enter your integer : ";
    std::cin >> userNumber;


    // Determine the nature of the integer
    if (userNumber > 0) {
        std::cout << userNumber << " is a positive number";
        std::cout << "\n";
    } else if (userNumber < 0) {
        std::cout << userNumber << " is a negative number";
        std::cout << "\n";
    } else if (userNumber == 0) {
        std::cout << userNumber << " is just 0";
        std::cout << "\n";
    } else {
        std::cout << "no idea";
    }
}
