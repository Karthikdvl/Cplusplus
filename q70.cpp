#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long octalNum;
    int decimalNum = 0, octalDigit, placeValue = 0;

    cout << "Enter an octal number: ";
    cin >> octalNum;

    while (octalNum != 0) {
        octalDigit = octalNum % 10;
        decimalNum += octalDigit * pow(8, placeValue);
        placeValue++;
        octalNum /= 10;
    }

    cout << "Decimal equivalent: " << decimalNum << endl;

    return 0;
}

