#include <iostream>

class Calculator {
public:

    int num1;
    int num2;

    Calculator(int n1, int n2) {
        num1 = n1;
        num2 = n2;
    }

    int add() {
        return num1 + num2;
    }

    int subtract() {
        return num1 - num2;
    }

    int multiply() {
        return num1 * num2;
    }

    float divide() {
        if (num2 == 0) {
            std::cout << "Error: Division by zero!" << std::endl;
            return 0.0f;
        }
        return static_cast<float>(num1) / num2;
    }
};

int main() {
    Calculator myCalc(20, 5);

    std::cout << "Numbers: " << myCalc.num1 << " and " << myCalc.num2 << std::endl;
    std::cout << "Addition: " << myCalc.add() << std::endl;
    std::cout << "Subtraction: " << myCalc.subtract() << std::endl;
    std::cout << "Multiplication: " << myCalc.multiply() << std::endl;
    std::cout << "Division: " << myCalc.divide() << std::endl;

    Calculator zeroDivCalc(10, 0);
    std::cout << "\nNumbers: " << zeroDivCalc.num1 << " and " << zeroDivCalc.num2 << std::endl;
    std::cout << "Division: " << zeroDivCalc.divide() << std::endl;


    return 0;
}
