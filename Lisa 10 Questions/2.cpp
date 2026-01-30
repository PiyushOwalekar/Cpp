#include <iostream>

class Rectangle {
public:

    double length;
    double width;

    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    double calculateArea() {
        return length * width;
    }

    double calculatePerimeter() {
        return 2 * (length + width);
    }
};

int main() {

    Rectangle rect(10.0, 5.0);

    std::cout << "Rectangle Area: " << rect.calculateArea() << std::endl;

    std::cout << "Rectangle Perimeter: " << rect.calculatePerimeter() << std::endl;

    return 0;
}
