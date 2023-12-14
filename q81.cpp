#include <iostream>
#include <string>
using namespace std;

int main() {
    string inputString;
    cout << "Enter a string: ";
    getline(cin, inputString);
    int length = inputString.length();
    cout << "Length of the string is: " << length << " characters" << endl;

    return 0;
}

