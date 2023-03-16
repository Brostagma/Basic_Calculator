//
// Created by Emin on 16.03.2023.
//

#include "operations.h"
#include "../input/input.h"

int summation() {
    getInput();
    return getFirstNumber() + getSecondNumber();
}

int subtraction() {
    getInput();
    return getFirstNumber() - getSecondNumber();
}

int multiply() {
    getInput();
    return getFirstNumber() * getSecondNumber();
}

int division() {
    getInput();
    return getFirstNumber() / getSecondNumber();
}