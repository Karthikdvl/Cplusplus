#include <iostream>
using namespace std;

int main() {
    double length, width, area, perimeter;

    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;

    area = length * width;
    perimeter = 2 * (length + width);

    cout << "Area of the rectangle is: " << area << endl;
    cout << "Perimeter of the rectangle is: " << perimeter << endl;

    return 0;
}

