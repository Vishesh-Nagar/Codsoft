#include <iostream>
#include <cmath>
#include "../include/Calculator.h"

using namespace std;

double Calculator::add(double a, double b) {
    return a + b;
}

double Calculator::subtract(double a, double b) {
    return a - b;
}

double Calculator::multiply(double a, double b) {
    return a * b;
}

double Calculator::divide(double a, double b) {
    if (b == 0) {
        cerr << "Error: Division by zero!" << endl;
        return 0;
    }
    return a / b;
}

double Calculator::exponentiate(double base, double exponent) {
    return pow(base, exponent);
}

double Calculator::squareRoot(double a) {
    if (a < 0) {
        cerr << "Error: Negative input for square root!" << endl;
        return 0;
    }
    return sqrt(a);
}

double Calculator::logarithm(double a) {
    if (a <= 0) {
        cerr << "Error: Non-positive input for logarithm!" << endl;
        return 0;
    }
    return log(a);
}

int main() {
    Calculator calc;
    double num1, num2;
    char operation;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operation (+, -, *, /, ^ for exponentiation, s for square root, l for logarithm): ";
    cin >> operation;

    if (operation == 's') {
        double result = calc.squareRoot(num1);
        cout << "Result: " << result << endl;
    } else if (operation == 'l') {
        double result = calc.logarithm(num1);
        cout << "Result: " << result << endl;
    } else {
        cout << "Enter second number: ";
        cin >> num2;

        double result;

        switch (operation) {
            case '+':
                result = calc.add(num1, num2);
                break;
            case '-':
                result = calc.subtract(num1, num2);
                break;
            case '*':
                result = calc.multiply(num1, num2);
                break;
            case '/':
                result = calc.divide(num1, num2);
                break;
            case '^':
                result = calc.exponentiate(num1, num2);
                break;
            default:
                cerr << "Invalid operation!" << endl;
                return 1;
        }

        cout << "Result: " << result << endl;
    }

    return 0;
}