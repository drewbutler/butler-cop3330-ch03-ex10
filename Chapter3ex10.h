/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Drew Butler
 */

#include <iostream>
#include <string>
using namespace std;

int main(void) {
    string operation;
    int num1, num2, result;

    cout << "Enter an operation followed by two numbers\n";
    cin >> operation;
    cin >> num1;
    cin >> num2;

    if (operation=="+") {
        result = num1 + num2;
        cout << result;
    } else if (operation=="-") {
        result = num1 - num2;
        cout << result;
    } else if (operation=="*") {
        result = num1 * num2;
        cout << result;
    } else {
        result = num1 / num2;
        cout << result;
    }

    return 0;
}