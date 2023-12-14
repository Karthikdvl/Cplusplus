#include <iostream>

class Shape {
public:
    virtual double area() {
        return 0.0; 
    }
};

class Rectangle : public Shape {
private:
    double width;
    double height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    double area() override {
        return width * height;
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double area() override {
        return 3.14159 * radius * radius;
    }
};

int main() {
    Shape* shapes[2];
    shapes[0] = new Rectangle(5.0, 3.0);
    shapes[1] = new Circle(2.5);

    for (int i = 0; i < 2; i++) {
        std::cout << "Area: " << shapes[i]->area() << std::endl;
        delete shapes[i];
    }

    return 0;
}

