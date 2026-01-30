#include <iostream>
#include <cmath>

class Circle {
public:
    double radius;

    Circle(double r) {
        radius = r;
    }

    double calculateArea() {
        return M_PI * radius * radius;
    }

    double calculateCircumference() {
        return 2 * M_PI * radius;
    }
};

int main() {
    Circle myCircle(7.0);

    std::cout << "--- Circle Details ---" << std::endl;
    std::cout << "Radius: " << myCircle.radius << std::endl;
    std::cout << "Area: " << myCircle.calculateArea() << std::endl;
    std::cout << "Circumference: " << myCircle.calculateCircumference() << std::endl;

    return 0;
}
