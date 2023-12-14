#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string inputString;
    cout << "Enter a string: ";
    getline(cin, inputString);

    sort(inputString.begin(), inputString.end());

    cout << "String in lexicographical order: " << inputString << endl;

    return 0;
}

