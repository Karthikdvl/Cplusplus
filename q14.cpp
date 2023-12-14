#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double number, squareRoot;
    cout << "Enter a number: ";
    cin >> number;
    if (number < 0) {
        cout << "Square root for negative numbers doesnot exist" << endl;
    } else {
        squareRoot = sqrt(number);
        cout << "Square root of " << number << " is: " << squareRoot << endl;
    }
    return 0;
}

