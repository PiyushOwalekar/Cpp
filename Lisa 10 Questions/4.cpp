#include <iostream>
#include <string>

class Employee {
public:

    int employeeID;
    std::string employeeName;
    double basicSalary;

    Employee(int id, std::string name, double salary) {
        employeeID = id;
        employeeName = name;
        basicSalary = salary;
    }

    void calculateAndDisplayTotalSalary() {

        double hra = 0.10 * basicSalary;
        double da = 0.05 * basicSalary;
        double totalSalary = basicSalary + hra + da;

        std::cout << "--- Employee Salary Details ---" << std::endl;
        std::cout << "Employee ID: " << employeeID << std::endl;
        std::cout << "Employee Name: " << employeeName << std::endl;
        std::cout << "Basic Salary: $" << basicSalary << std::endl;
        std::cout << "Total Salary: $" << totalSalary << std::endl;
    }
};

int main() {

    Employee emp1(101, "Satvik", 50000.0);

    emp1.calculateAndDisplayTotalSalary();

    return 0;
}
