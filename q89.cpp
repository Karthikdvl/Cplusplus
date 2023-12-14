#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;

    cout << "Enter the first string: ";
    getline(cin, str1);
    cout << "Enter the second string: ";
    getline(cin, str2);

    swap(str1, str2);

    cout << "After swapping, the first string is: " << str1 << endl;
    cout << "After swapping, the second string is: " << str2 << endl;

    return 0;
}

