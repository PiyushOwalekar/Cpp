#include <iostream>
using namespace std;

class abc
{
    public:
    int id;

    abc()
    {
        cout << "Default Constructor" << endl;
        id = 1;
    }

    abc(int a)
    {
        cout << "Parameterized Constructor" << endl;
        id = a;
    }
};

int main()
{
    abc obj1;
    cout << "ID: " << obj1.id << endl;

    abc obj2(100);
    cout << "ID: " << obj2.id << endl;

    return 0;
}