#include <iostream>
using namespace std;

int main() {
    int decimalNum;
    long long binaryNum = 0;
    int remainder, placeValue = 1;

    cout << "Enter a decimal number: ";
    cin >> decimalNum;

    while (decimalNum != 0) {
        remainder = decimalNum % 2;
        binaryNum += remainder * placeValue;
        placeValue *= 10;
        decimalNum /= 2;
    }

    cout << "Binary equivalent: " << binaryNum << endl;

    return 0;
}

