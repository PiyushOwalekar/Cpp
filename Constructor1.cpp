//write a program to add two numbersusing constructor
#include<iostream>
using namespace std;

class Addition {
public:
    int sum;

    Addition(int a, int b) {
        sum = a + b;
    }

    void display() {
        cout << "The sum of the two numbers is: " << sum << endl;
    }
};

int main() {
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    Addition obj(num1, num2);
    obj.display();

    return 0;
}
