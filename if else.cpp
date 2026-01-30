//write a program to find a person is a child, teenager or adult
#include <iostream>
using namespace std;

int main() {
    int age=18;
   if (age < 13)
   {
       cout<<"You are a child."<<endl;
   }
   else if (age >= 13 && age < 18)
   {
       cout<<"You are a teenager."<<endl;
   }  
    else
    {
         cout<<"You are an adult."<<endl;
    }
    return 0;
}