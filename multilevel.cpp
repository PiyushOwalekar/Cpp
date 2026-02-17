#include <iostream>
using namespace std;
class Person{
    public:
    void showPerson(){
        cout<<"Person"<<endl;
    }
};
class Student: public Person{
    public:
    void showStudent(){
        cout<<"Student"<<endl;
    }
};
int main(){
    Student s;
    s.showStudent();
    s.showPerson();  
    return 0;
}