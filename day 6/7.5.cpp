#include <iostream>
#include <cmath>

class Rectangle;

class Polar {
private:
    double radius;
    double angle;

public:
    Polar(double r, double a) : radius(r), angle(a) {}

    friend Rectangle polarToRect(const Polar& polar_point);

    void display() {
        std::cout << "Polar Coordinates: (Radius = " << radius << ", Angle = " << angle << " radians)" << std::endl;
    }
};

class Rectangle {
private:
    double x;
    double y;

public:
    Rectangle(double x_val, double y_val) : x(x_val), y(y_val) {}

    friend Polar rectToPolar(const Rectangle& rect_point);

    void display() {
        std::cout << "Rectangular Coordinates: (" << x << ", " << y << ")" << std::endl;
    }
};

Rectangle polarToRect(const Polar& polar_point) {
    double x = polar_point.radius * cos(polar_point.angle);
    double y = polar_point.radius * sin(polar_point.angle);
    return Rectangle(x, y);
}

Polar rectToPolar(const Rectangle& rect_point) {
    double radius = sqrt(rect_point.x * rect_point.x + rect_point.y * rect_point.y);
    double angle = atan2(rect_point.y, rect_point.x);
    return Polar(radius, angle);
}

int main() {
    Polar polar_point(2.0, 1.047); 
    polar_point.display();

    Rectangle rect_point = polarToRect(polar_point); 
    rect_point.display();

    Polar polar_point2 = rectToPolar(rect_point); 
    polar_point2.display();

    return 0;
}

