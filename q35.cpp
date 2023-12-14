#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double num, cubeRoot;

    cout << "Enter a number: ";
    cin >> num;

    cubeRoot = cbrt(num);

    cout << "Cube root of " << num << " is: " << cubeRoot << endl;

    return 0;
}

