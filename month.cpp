// Copyright (c) 2022 Nicolas Riscalas All rights reserved.
//
// Created by: Nicolas Riscalas
// Created on: April 2 2022
// This program figures out the equivalent month to a number
#include <iostream>
using std::cout;
using std::cin;
using std::string;

int main() {
    int monthNum;
    cout << "Enter the number equivalent to a month \n";
    cin >> monthNum;

    switch (monthNum) {
        case 1:
            cout << "The equivalent month is January\n";
            break;
        case 2:
            cout << "The equivalent month is Febuary\n";
            break;
        case 3:
            cout << "The equivalent month is March\n";
            break;
        case 4:
            cout << "The equivalent month is April\n";
            break;
        case 5:
            cout << "The equivalent month is May\n";
            break;
        case 6:
            cout << "The equivalent month is June\n";
            break;
        case 7:
            cout << "The equivalent month is July\n";
            break;
        case 8:
            cout << "The equivalent month is August\n";
            break;
        case 9:
            cout << "The equivalent month is September\n";
            break;
        case 10:
            cout << "The equivalent month is October\n";
            break;
        case 11:
            cout << "The equivalent month is November\n";
            break;
        case 12:
            cout << "The equivalent month is December\n";
            break;
        default:
            cout << "Invalid Input. Month number" << \
            <<"should be an integer between 1 and 12\n";
            break;
    }
    string tryAgain;
    cout << "would you like to try again? ";
    cin >> tryAgain;
    if (tryAgain == "y"
        || tryAgain == "Y"
        || tryAgain == "yes"
        || tryAgain == "YES") {
        main();
    } else if (tryAgain == "n"
        || tryAgain == "N"
        || tryAgain == "no"
        || tryAgain == "NO") {
        exit(1);
        }

    return 0;
}
