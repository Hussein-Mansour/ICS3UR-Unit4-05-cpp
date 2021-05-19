// Copyright (c) 2021 Hussein Mansour All rights reserved
//
// Created by: Hussein Mansour
// Created on: Mon/May17/2021
// This program uses a continue statement


#include <iostream>


int main() {
    // this function add positive numbers

    std::string positive;
    std::string add;
    int counter = 0;
    int sumOfNumbers = 0;
    int positiveInt;
    int addInt;


    // input
    std::cout << "How many numbers you are going to add:";
    std::cin >> positive;

    // process & output
    try {
        positiveInt = std::stoi(positive);

        while (counter < positiveInt) {
            counter = counter + 1;
            std::cout << "Enter a number to add:";
            std::cin >> add;
            addInt = std::stoi(add);

           if (addInt < 0) {
               continue;
           }

           sumOfNumbers = sumOfNumbers + addInt;

        std::cout << "\nSum of just the positive numbers is = "
        << sumOfNumbers << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "\ninvalid input!" << std::endl;
    }


std::cout << "\n\nDone." << std::endl;
}
