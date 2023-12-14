#include <iostream>
#include <string>
using namespace std;

int main() {
    string inputString, resultString = "";

    cout << "Enter a string: ";
    getline(cin, inputString);

    for (char c : inputString) {
        if (isalpha(c)) {
            resultString += c;
        }
    }

    cout << "String with non-alphabetic characters removed: " << resultString << endl;

    return 0;
}

