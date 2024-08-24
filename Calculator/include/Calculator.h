#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <cmath>

class Calculator {
public:
    double add(double a, double b);
    double subtract(double a, double b);
    double multiply(double a, double b);
    double divide(double a, double b);
    double exponentiate(double base, double exponent);
    double squareRoot(double a);
    double logarithm(double a);
};

#endif