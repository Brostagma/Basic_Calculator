//
// Created by Emin on 16.03.2023.
//

#include "menu.h"
#include "../operations/operations.h"

#include <iostream>

int select(0);

void action();
bool menuExit();
bool alternativeMenuExit();

void menu() {
    bool run{true};

    std::cout << "Welcome to Calculator...\n";
    while(run) {

        action();
        std::cout << "Please select the action you want to take: ";
        std::cin >> select;
        std::cout << "\n***********************************************\n";
        switch (select) {
            case 1:
                //code
                std::cout << summation();
                run = alternativeMenuExit();
                break;
            case 2:
                //code
                std::cout << subtraction();
                run = alternativeMenuExit();
                break;
            case 3:
                //code
                std::cout << multiply();
                run = alternativeMenuExit();
                break;
            case 4:
                //code
                std::cout << division();
                run = alternativeMenuExit();
                break;
            case 5:
                //code
                run= menuExit();
                break;
            default:
                std::cout << "Enter a valid transaction: ";
                std::cout << "\n***********************************************\n";
                break;
        }
    }
}

void action() {
    std::cout << "1.Summation:\n"
                 "2.Subtraction:\n"
                 "3.Multiply:\n"
                 "4.Division:\n"
                 "5.Exit:\n";
}

bool menuExit() {
    std::cout << "\n1.Are you sure you want to close it? (1)";
    std::cout << "\n2.Would you like to continue? (2)";
    std::cout << "\nPlease enter: ";
    std::cin >> select;
    return (select == 1) ? false : true;
}

bool alternativeMenuExit() {
    std::cout << "\n1.Would you like to continue? (1)";
    std::cout << "\n2.For Exit: (2)";
    std::cout << "\nPlease enter: ";
    std::cin >> select;
    return (select == 1) ? true : false;
}
