// Copyright (c) 2021 Malcolm Tompkins All rights reserved
//
// Created by Malcolm Tompkins
// Created on May 24, 2021
// Reverses user input numbers

#include <iostream>
#include <string>
#include <cmath>

main() {
    std::string user_input;
    int user_number, floor_number;
    int reversed_number = 0;
    std::cout << "Enter your number to be reversed: ";
    std::cin >> user_input;
    try {
        user_number = std::stoi(user_input);
        while (user_number > 0) {
            reversed_number = (reversed_number * 10) + user_number % 10;
            user_number = user_number /= 10;
        }
        std::cout << "The reverse of " << user_input << " is: ";
        std::cout << reversed_number;
    } catch (std::invalid_argument) {
        std::cout << user_input << " is not a positive integer";
    }
    std::cout << "\nDone.";
}
