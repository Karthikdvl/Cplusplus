#include <iostream>
#include <string>
using namespace std;

int main() {
    string sourceString, targetString;

    cout << "Enter the source string: ";
    getline(cin, sourceString);
    targetString = sourceString;
    cout << "Copied string: " << targetString << endl;

    return 0;
}

