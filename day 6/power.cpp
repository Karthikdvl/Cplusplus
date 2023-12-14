#include <iostream>
#include <cmath>

class PowerCalculator {
public:
    int operator^(int base, int exponent) {
        int result = 1;
        for (int i = 0; i < exponent; i++) {
            result *= base;
        }
        return result;
    }


    double operator^(double base, double exponent) {
        return std::pow(base, exponent);
    }
};

int main() {
    PowerCalculator power;

    int integerBase = 2;
    int integerExponent = 3;
    double floatBase = 2.0;
    double floatExponent = 2.5;

    int intResult = power^ (integerBase, integerExponent);
    double floatResult = power^ (floatBase, floatExponent);

    std::cout << integerBase << " raised to the power of " << integerExponent << " is: " << intResult << std::endl;
    std::cout << floatBase << " raised to the power of " << floatExponent << " is: " << floatResult << std::endl;

    return 0;
}

