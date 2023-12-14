#include <iostream>
#include <cmath>

class Shape {
public:
    // Calculate the area of a square
    static double calculateArea(double side) {
        return side * side;
    }

    // Calculate the area of a rectangle
    static double calculateArea(double length, double width) {
        return length * width;
    }

    // Calculate the area of a circle
    static double calculateArea(double radius) {
        return M_PI * radius * radius;
    }
};

int main() {
    double side = 5.0;
    double length = 6.0;
    double width = 4.0;
    double radius = 3.0;

    double areaSquare = Shape::calculateArea(side);
    double areaRectangle = Shape::calculateArea(length, width);
    double areaCircle = Shape::calculateArea(radius);

    std::cout << "Area of square: " << areaSquare << std::endl;
    std::cout << "Area of rectangle: " << areaRectangle << std::endl;
    std::cout << "Area of circle: " << areaCircle << std::endl;

    return 0;
}

