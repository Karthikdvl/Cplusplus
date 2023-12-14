#include <iostream>
using namespace std;

int main() {
    double num1, num2, num3, sum, average;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    sum = num1 + num2 + num3;
    average = sum / 3;
    cout << "Sum of the three numbers is: " << sum << endl;
    cout << "Average of the three numbers is: " << average << endl;
    return 0;
}

