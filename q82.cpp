#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;
    cout << "Enter the first string: ";
    getline(cin, str1);
    cout << "Enter the second string: ";
    getline(cin, str2);
    int comparisonResult = str1.compare(str2);
    if (comparisonResult == 0) {
        cout << "The two strings are equal." << endl;
    } else if (comparisonResult < 0) {
        cout << "The first string is smaller than the second string." << endl;
    } else {
        cout << "The first string is larger than the second string." << endl;
    }
    return 0;
}

