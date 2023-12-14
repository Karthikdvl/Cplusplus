#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string inputString;
    cout << "Enter a string: ";
    getline(cin, inputString);

    for (char &c : inputString) {
        if (islower(c)) {
            c = toupper(c);
        }
    }

    cout << "String with lowercase letters converted to uppercase: " << inputString << endl;

    return 0;
}

