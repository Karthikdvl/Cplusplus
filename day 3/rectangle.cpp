#include <iostream>

class Rectangle {
private:
    double length;
    double width;

public:
    // Constructor to initialize the rectangle
    Rectangle(double l, double w) : length(l), width(w) {
        std::cout << "Rectangle is created with length " << length << " and width " << width << std::endl;
    }

    // Destructor
    ~Rectangle() {
        std::cout << "Rectangle is destroyed." << std::endl;
    }

    // Function to calculate the area of the rectangle
    double calculateArea() {
        return length * width;
    }

    // Function to calculate the perimeter of the rectangle
    double calculatePerimeter() {
        return 2 * (length + width);
    }
};

int main() {
    double userLength, userWidth;

    std::cout << "Enter the length of the rectangle: ";
    std::cin >> userLength;

    std::cout << "Enter the width of the rectangle: ";
    std::cin >> userWidth;

    Rectangle myRectangle(userLength, userWidth);

    double area = myRectangle.calculateArea();
    double perimeter = myRectangle.calculatePerimeter();

    std::cout << "Area of the rectangle: " << area << std::endl;
    std::cout << "Perimeter of the rectangle: " << perimeter << std::endl;

    return 0;
}

