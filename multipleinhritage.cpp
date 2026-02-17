#include<iostream>
using namespace std;

class InputA {
    private:
    int a;
    public:
    void getA(){
        cout<<"Enter a number: ";
        cin>>a;}
        int getValue(){
            return a;
        }};

class InputB {
     private:
    int b;
    public:
    void getB(){
        cout<<"Enter a number: ";
        cin>>b;}
        int getValueB(){
            return b;
        }};

class sum : public InputA, public InputB {
    public:
    void displaySum()
    {
        cout << "sum = " << InputA::getValue() + InputB::getValueB() << endl;}};

        int main()
        {
            sum s;
            s.getA();
            s.getB();
            s.displaySum();
            return 0;
        
        }