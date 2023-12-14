#include<iostream>

class Shape {
protected:
    double height;
    double width;
public:
    Shape(double h, double w) : height(h), width(w) {}

    virtual double calculateArea() {
        return 0.0; 
    }

    virtual double calculatePerimeter() {
        return 0.0; 
    }
};

class Rectangle : public Shape {
public:
    Rectangle(double h, double w) : Shape(h, w) {}

    double calculateArea() override {
        return height * width;
    }

    double calculatePerimeter() override {
        return 2 * (height + width);
    }
};

class Triangle : public Shape {
public:
    Triangle(double h, double w) : Shape(h, w) {}

    double calculateArea() override {
        return 0.5 * height * width;
    }

    double calculatePerimeter() override {
.
        return 0.0; 
    }
};

int main() {
    Rectangle rect(5.0, 4.0);
    Triangle tri(3.0, 6.0);

    std::cout << "Rectangle Area: " << rect.calculateArea() << std::endl;
    std::cout << "Rectangle Perimeter: " << rect.calculatePerimeter() << std::endl;

    std::cout << "Triangle Area: " << tri.calculateArea() << std::endl;


    return 0;
}

