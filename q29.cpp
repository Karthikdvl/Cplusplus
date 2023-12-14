#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, originalNum, rem, result = 0, n = 0;

    cout << "Enter an integer: ";
    cin >> num;
    originalNum = num;

    while (originalNum != 0) {
        originalNum /= 10;
        n++;
    }

    originalNum = num;

    while (originalNum != 0) {
        rem = originalNum % 10;
        result += pow(rem, n);
        originalNum /= 10;
    }

    if (result == num) {
        cout << num << " is an Armstrong number." << endl;
    } else {
        cout << num << " is not an Armstrong number." << endl;
    }

    return 0;
}

