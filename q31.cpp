#include <iostream>
using namespace std;

int main() {
    int num, reversedNum = 0, originalNum, rem;

    cout << "Enter an integer: ";
    cin >> num;
    originalNum = num;

    while (num != 0) {
        rem = num % 10;
        reversedNum = reversedNum * 10 + rem;
        num /= 10;
    }

    if (originalNum == reversedNum) {
        cout << originalNum << " is a palindrome number" << endl;
    } else {
        cout << originalNum << " is not a palindrome number" << endl;
    }

    return 0;
}

