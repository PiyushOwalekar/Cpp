#include<iostream>
using namespace std;

class student {
public:
int rno;
char name[50];
double fee;

student()
{
    cout << "enter the rollno: ";
    cin >> rno;
    cout << "enter the name: ";
    cin >> name;
    cout << "enter the fee: ";
    cin >> fee;
}

void display()
{
    cout << endl << rno << endl << name << endl << fee << endl;
}
};

int main()
{
    student s;
    s.display();
    return 0;
}
