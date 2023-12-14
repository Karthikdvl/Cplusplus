#include <iostream>
#include <cmath>

class Polar {
private:
    double radius;
    double angle;
public:
    Polar(double r, double a) : radius(r), angle(a) {}
    Polar operator+(const Polar& pol) {
        double x1 = radius * cos(angle);
        double y1 = radius * sin(angle);

        double x2 = pol.radius * cos(pol.angle);
        double y2 = pol.radius * sin(pol.angle);

        double x_sum = x1 + x2;
        double y_sum = y1 + y2;

        double result_radius = sqrt(x_sum * x_sum + y_sum * y_sum);
        double result_angle = atan2(y_sum, x_sum);

        return Polar(result_radius, result_angle);
    }

    void display() {
        std::cout << "Radius: " << radius << ", Angle: " << angle << " radians" << std::endl;
    }
};

int main() {
    Polar point1(3.0, 1.047); 
    Polar point2(2.0, 2.094); 

    Polar result = point1 + point2;

    std::cout << "point 1: ";
    point1.display();

    std::cout << "point 2: ";
    point2.display();

    std::cout << "resultant point: ";
    result.display();

    return 0;
}

