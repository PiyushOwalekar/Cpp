#include <iostream>
#include <string>

class Student {
public:
    std::string name;
    int rollNumber;
    float marks;

    void inputDetails() {
        std::cout << "Enter name: ";
        std::getline(std::cin, name);

        std::cout << "Enter roll number: ";
        std::cin >> rollNumber;

        std::cout << "Enter marks: ";
        std::cin >> marks;
    }

    void displayDetails() {
        std::cout << "\n--- Student Details ---" << std::endl;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Roll Number: " << rollNumber << std::endl;
        std::cout << "Marks: " << marks << std::endl;
    }
};

int main() {
    Student student1;

    student1.inputDetails();
    
    student1.displayDetails();

    return 0;
}
