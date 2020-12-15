// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Sep 2019
// This program finds the magic number

#include <iostream>
#include <string>
#include <random>

int main() {
    // this function shows the magic number
    std::string chosen_number_string;
    int chosen_number;
    int random_number;

    // input

    std::random_device rseed;
    std::mt19937 rgen(rseed());  // mersenne_twister
    std::uniform_int_distribution<int> idist(0, 9);  // [0, 9]
    random_number = idist(rgen);

    // process & output
    while (true) {
        std::cout << "Enter a number between 0 and 9: ";
        std::cin >> chosen_number_string;

        try {
            chosen_number = std::stoi(chosen_number_string);

            if (chosen_number == random_number) {
                std::cout << "Correct!" << std::endl;
                break;
            } else if (chosen_number > random_number) {
                std::cout << "Too high, please try again" << std::endl;
            } else {
                std::cout << "Too low, please try again" << std::endl;
            }
    } catch (std::invalid_argument) {
        // output
        std::cout << "That was not a valid integer" << std::endl;
    }
}
}
