#include <iostream>
using namespace std;
int main() {
    char operation;
    double num1, num2, result;
    cout << "Enter an operation (+, -, *, /): ";
    cin >> operation;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                cout << "Division by zero is not allowed." << endl;
                return 1;
            }
            break;
        default:
            cout << "Invalid operator." << endl;
            return 1;
    }
    cout << "Result: " << result << endl;
    return 0;
}

