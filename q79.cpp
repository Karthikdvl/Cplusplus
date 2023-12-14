#include <iostream>
#include <string>
using namespace std;

int main() {
    string inputString;

    cout << "Enter a string: ";
    getline(cin, inputString);

    cout << "You entered: " << inputString << endl;

    return 0;
}

