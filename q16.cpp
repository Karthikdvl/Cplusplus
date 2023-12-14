#include <iostream>
#define CUBE(x) ((x) * (x) * (x))
using namespace std;

int main() {
    int number, result;

    cout << "Enter a number: ";
    cin >> number;

    result = CUBE(number);

    cout << "Cube of " << number << " is: " << result << endl;

    return 0;
}

