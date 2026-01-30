#include <iostream>
#include <string>

class Car {
public:
    std::string brand;
    std::string model;
    int year;

    Car(std::string carBrand, std::string carModel, int carYear) {
        brand = carBrand;
        model = carModel;
        year = carYear;
    }

    void displayDetails() {
        std::cout << "--- Car Details ---" << std::endl;
        std::cout << "Brand: " << brand << std::endl;
        std::cout << "Model: " << model << std::endl;
        std::cout << "Year: " << year << std::endl;
    }
};

int main() {
    Car myCar("Ford", "Mustang", 1971);
    myCar.displayDetails();
    return 0;
}
