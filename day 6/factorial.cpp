#include <iostream>


unsigned long long factorial(int n) {
    if (n < 0) {
        return 0; 
    }
    unsigned long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

double factorial(double n) {
    if (n < 0.0) {
        return 0.0;
    }
    double result = 1.0;
    for (double i = 1.0; i <= n; i += 1.0) {
        result *= i;
    }
    return result;
}

int main() {
    int integerNumber = 5;
    double floatingPointNumber = 5.5;

    unsigned long long intFactorial = factorial(integerNumber);
    double doubleFactorial = factorial(floatingPointNumber);

    std::cout << "Factorial of " << integerNumber << " (integer): " << intFactorial << std::endl;
    std::cout << "Factorial of " << floatingPointNumber << " (floating-point): " << doubleFactorial << std::endl;

    return 0;
}

