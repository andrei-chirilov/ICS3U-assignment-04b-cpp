// Copyright (c) 2019 Andrei Chirilov all rights reserved
//
// Created by: Andrei Chirilov
// Created on: October 2019
// This program detirmines how many days there are in a month

#include <iostream>

int main() {
    std::string month;

    std::cout << "Enter a month: ";
    std::cin >> month;

    if (month == "January" || month == "March" || month == "May" || month ==
    "July" || month == "August" || month == "October" || month == "December") {
        std::cout << "31 Days.";
    } else if (month == "April" || month == "June" || month == "September" ||
    month == "November") {
        std::cout << "30 Days.";
    } else if (month == "February") {
        std::cout << "28 days/29 on leap years";
    } else {
        std::cout << "This is not a month.";
    }
}
