#include <iostream>
using namespace std;
class A {
    protected:
    int a;
    public:
    void getA() {
        cout << "Enter first number: ";
        cin >> a;
    }
};

class squar : public A {
public:
    void showsquares() {
        cout << "The square of the number is: " << a * a << endl;
    }
};

class cube : public A {
public:
    void showcubes() {
        cout << "The cube of the number is: " << a * a * a << endl;
    }
};

int main() {
    squar s;
    s.getA();
    s.showsquares();
    cube c;
    c.getA();
    c.showcubes();
    return 0;
}