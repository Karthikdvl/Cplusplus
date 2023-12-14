#include <iostream>
using namespace std;

int main() {
    char character;

    cout << "Enter a character: ";
    cin >> character;

    if (isalpha(character)) {
        if (isupper(character)) {
            cout << character << " is an uppercase letter." << endl;
        } else if (islower(character)) {
            cout << character << " is a lowercase letter." << endl;
        }
    } else if (isdigit(character)) {
        cout << character << " is a digit." << endl;
    } else {
        cout << character << " is a special character." << endl;
    }

    return 0;
}

