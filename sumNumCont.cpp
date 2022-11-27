// Copyright (c) 2022 Ioana Marinescu All rights reserved.
// Created By: Ioana Marinescu

// Date: Nov. 23, 2022
// a programs that adds the numbers
// the user inputs for a given amount of numbers

#include <iostream>

int main() {
    // variable declaration
    std::string amountOfNumsStr, sumDisplayed, userNumStr;
    int amountOfNumsInt, counter, userNumInt, totalSum;

    // variable initialisation
    counter = 0;
    totalSum = 0;

    // getting user input for the amount of numbers the user wants to add
    std::cout << "How many numbers do you want to add? ";
    std::cin >> amountOfNumsStr;

    // exception handling
    try {
        // converting from string to int
        amountOfNumsInt = stof(amountOfNumsStr);

        if (amountOfNumsInt < 0) {
            std::cout << "Invalid input! Please enter a whole number!"
                      << std::endl;
        } else {
            while (counter < amountOfNumsInt) {
                // gets the numbers the user
                std::cout << "Enter the number you would like to add: ";
                std::cin >> userNumStr;

                try {
                    userNumInt = stoi(userNumStr);

                    // user num is negative
                    if (userNumInt < 0) {
                        std::cout << "Invalid Input! Please enter "
                        << "a whole number!"<< std::endl;

                    // user num is whole
                    } else {
                        counter++;

                        // calculates the sum
                        totalSum += userNumInt;

                        // its not the last time a number will be entered
                        if (counter != amountOfNumsInt) {
                            sumDisplayed += std::to_string(userNumInt) + " + ";
                            continue;
                        }
                        // its the last time a number will be entered
                        sumDisplayed += std::to_string(userNumInt) +
                        " = " + std::to_string(totalSum);
                    }
                } catch(std::invalid_argument) {
                    std::cout << "Invalid Input! Please enter"
                              << " a whole number!" << std::endl;
                }
            }
            std::cout << sumDisplayed << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "Invalid Input! Please enter a whole number!" << std::endl;
    }
}
