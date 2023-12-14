#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double pri, rate, time, ci;
    cout << "Enter principal amount: ";
    cin >> pri;
    cout << "Enter annual interest rate (in percentage): ";
    cin >> rate;
    cout << "Enter time period (in years): ";
    cin >> time;
    rate = rate / 100; 
    ci = pri * (pow(1 + rate, time) - 1);
    cout << "Compound interest is: " << ci << endl;
    return 0;
}

