#include <iostream>
using namespace std;

int main() {
    int num, sum = 0, dig;

    cout << "Enter an integer: ";
    cin >> num;

    while (num != 0) {
        dig = num % 10;
        sum += dig;
        num /= 10;
    }

    cout << "Sum of the digits is: " << sum << endl;

    return 0;
}

