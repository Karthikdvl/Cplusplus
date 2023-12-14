#include <iostream>
using namespace std;

int main() {
    double inches, yards, feet;
    cout << "Enter length in inches: ";
    cin >> inches;
    yards = inches / 36;
    feet = inches / 12;
    cout << inches << " inches is equivalent to " << yards << " yards, " << feet << " feet " << endl;
    return 0;
}

