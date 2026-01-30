#include <iostream>

class Interest {
public:
    double principal;
    double rate;
    double time;

    Interest(double p, double r, double t) {
        principal = p;
        rate = r;
        time = t;
    }

    double calculateSimpleInterest() {
        return (principal * rate * time) / 100.0;
    }
};

int main() {
    Interest myInterest(1000.0, 5.0, 2.0);

    std::cout << "--- Simple Interest Calculation ---" << std::endl;
    std::cout << "Principal Amount: $" << myInterest.principal << std::endl;
    std::cout << "Rate of Interest: " << myInterest.rate << "%" << std::endl;
    std::cout << "Time Period: " << myInterest.time << " years" << std::endl;
    std::cout << "Simple Interest: $" << myInterest.calculateSimpleInterest() << std::endl;

    return 0;
}
