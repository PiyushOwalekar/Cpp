#include <iostream>
using namespace std;

int factorial(int);

int main()
{
    int n;

    cout << "Enter a positive number: ";
    cin >> n;

    if (n < 0)
    {
        cout << "Factorial is not defined for negative numbers." << endl;
    }
    else
    {
        cout << "Factorial of " << n << " = " << factorial(n) << endl;
    }

    return 0;
}
int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}
    