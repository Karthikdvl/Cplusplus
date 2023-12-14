#include <iostream>
using namespace std;

int main() {
    int decimalNumber;
    long long octalNumber = 0;
    int remainder, placeValue = 1;

    cout << "Enter a decimal number: ";
    cin >> decimalNumber;

    while (decimalNumber != 0) {
        remainder = decimalNumber % 8;
        octalNumber += remainder * placeValue;
        placeValue *= 10;
        decimalNumber /= 8;
    }

    cout << "Octal equivalent: " << octalNumber << endl;

    return 0;
}

