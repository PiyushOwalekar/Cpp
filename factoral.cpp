//write a pragram to fing factorial
#include <iostream>
using namespace std;
int getFactorial()
{
    int num = 5;
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int result;

    result = getFactorial();
    cout << "Factorial is:"<< endl;
    return 0;
}