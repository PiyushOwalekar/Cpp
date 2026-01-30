#include <iostream>
#include <string>
#include <vector>

class Result {
public:
    std::string studentName;
    double marks1, marks2, marks3;

    Result(std::string name, double m1, double m2, double m3) {
        studentName = name;
        marks1 = m1;
        marks2 = m2;
        marks3 = m3;
    }

    double calculateTotalMarks() {
        return marks1 + marks2 + marks3;
    }

    double calculateAverageMarks() {
        return calculateTotalMarks() / 3.0;
    }

    void displayResult() {
        std::cout << "--- Student Result ---" << std::endl;
        std::cout << "Name: " << studentName << std::endl;
        std::cout << "Marks: " << marks1 << ", " << marks2 << ", " << marks3 << std::endl;
        std::cout << "Total Marks: " << calculateTotalMarks() << std::endl;
        std::cout << "Average Marks: " << calculateAverageMarks() << std::endl;
    }
};

int main() {
    Result studentResult("David", 85.0, 90.5, 78.0);
    studentResult.displayResult();

    return 0;
}
