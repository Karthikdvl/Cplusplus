#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double num, squareRoot;

    cout << "Enter a number: ";
    cin >> num;

    if (num < 0) {
        cout << "Square root for negitive numbers doesnot exist" << endl;
    } else {
        squareRoot = sqrt(num);
        cout << "Square root of " << num << " is: " << squareRoot << endl;
    }

    return 0;
}

