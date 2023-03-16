//
// Created by Emin on 16.03.2023.
//

#include "input.h"


int first_number{0};
int second_number{0};

void getInput() {
    std::cout << "Enter first number: ";
    std::cin >> first_number;
    std::cout << "\n**********************\n";

    std::cout << "Enter second number: ";
    std::cin >> second_number;
    std::cout << "\n**********************\n";
}

int getFirstNumber() {
    return first_number;
}

int getSecondNumber() {
    return second_number;
}