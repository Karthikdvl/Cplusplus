#include <iostream>
#include <cmath>
using namespace std;

int binaryToDecimal(long long binaryNumber) {
    int decimalNumber = 0, remainder, base = 1;

    while (binaryNumber != 0) {
        remainder = binaryNumber % 10;
        decimalNumber += remainder * base;
        base *= 2;
        binaryNumber /= 10;
    }

    return decimalNumber;
}

int decimalToOctal(int decimalNumber) {
    int octalNumber = 0, placeValue = 1;

    while (decimalNumber != 0) {
        int remainder = decimalNumber % 8;
        octalNumber += remainder * placeValue;
        placeValue *= 10;
        decimalNumber /= 8;
    }

    return octalNumber;
}

int main() {
    long long binaryNumber;
    
    cout << "Enter a binary number: ";
    cin >> binaryNumber;

    int decimalNumber = binaryToDecimal(binaryNumber);

    int octalNumber = decimalToOctal(decimalNumber);

    cout << "Octal equivalent: " << octalNumber << endl;

    return 0;
}

