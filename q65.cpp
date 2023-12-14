#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long binaryNum, decimalNum = 0;
    int rem, i = 0;

    cout << "Enter a binary number: ";
    cin >> binaryNum;

    while (binaryNum != 0) {
        rem = binaryNum % 10;
        decimalNum += rem * pow(2, i);
        i++;
        binaryNum /= 10;
    }
    cout << "Decimal equivalent: " << decimalNum << endl;
    return 0;
}

