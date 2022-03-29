// Copyright (c) 2022 Aidan Lalonde-Novales All rights reserved
//
// Created by Aidan Lalonde-Novales
// Created on 2022-03-29
// This program prompts a user to enter a number
// and tells them what month it corresponds to.

#include <iostream>

int main() {
    // this function gets a number and returns a month
    int monthNumber;

    // input
    std::cout << "Enter the number of a month (ex: 3 for March): ";
    std::cin >> monthNumber;

    // process
    switch (monthNumber) {
        case 1 :
            // output
            std::cout << "January" << std::endl;
            break;
        case 2 :
            std::cout << "February" << std::endl;
            break;
        case 3 :
            std::cout << "March" << std::endl;
            break;
        case 4 :
            std::cout << "April" << std::endl;
            break;
        case 5 :
            std::cout << "May" << std::endl;
            break;
        case 6 :
            std::cout << "June" << std::endl;
            break;
        case 7 :
            std::cout << "July" << std::endl;
            break;
        case 8 :
            std::cout << "August" << std::endl;
            break;
        case 9 :
            std::cout << "September" << std::endl;
            break;
        case 10 :
            std::cout << "October" << std::endl;
            break;
        case 11 :
            std::cout << "November" << std::endl;
            break;
        case 12 :
            std::cout << "December" << std::endl;
            break;
        default :
            std::cout << "Invalid Number - Make sure it is between 1-12"
            << std::endl;
        }

        std::cout << "\nDone." << std::endl;
    }
