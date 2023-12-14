#include <iostream>

// Function to find the absolute value of an integer
int abs(int num) {
    if (num < 0) {
        return -num;
    } else {
        return num;
    }
}

// Function to find the absolute value of a floating-point number
float abs(float num) {
    if (num < 0.0f) {
        return -num;
    } else {
        return num;
    }
}

int main() {
    int integerNum = 5;
    float floatNum = -3.14;

    int absInteger = abs(integerNum);
    float absFloat = abs(floatNum);

    std::cout << "Absolute value of integer " << integerNum << " is " << absInteger << std::endl;
    std::cout << "Absolute value of floating-point " << floatNum << " is " << absFloat << std::endl;

    return 0;
}

