#include<iostream>
using namespace std;

class Number 
{
    public:
    int value;
    Number(int v) : value(v) {}

    Number operator+(const Number& obj)
    {
        return Number(value + obj.value);
    }
};

int main()
{
Number n1(30);
Number n2(20);
Number n3 = n1 + n2;

cout << "Sum = " << n3.value << endl;

return 0;
}