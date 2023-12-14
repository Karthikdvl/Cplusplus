#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, n, result;
    cout << "Enter the base (X): ";
    cin >> x;
    cout << "Enter the exponent (N): ";
    cin >> n;
    result = pow(x, n);
    cout << x << "  power " << n << " is: " << result << endl;
    return 0;
}

