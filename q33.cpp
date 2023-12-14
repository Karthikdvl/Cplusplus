#include <iostream>
using namespace std;

int main() {
    int num1, num2, lcm, maxNum;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    maxNum = (num1 > num2) ? num1 : num2;

    while (true) {
        if (maxNum % num1 == 0 && maxNum % num2 == 0) {
            lcm = maxNum;
            break;
        }
        maxNum++;
    }

    cout << "LCM is: " << lcm << endl;

    return 0;
}

