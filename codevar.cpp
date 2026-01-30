#include<iostream>
using namespace std;
int main(){

    int var = 10; 
    int* point_var = &var;

    cout << "var = " << var << endl;

    cout <<  "Address of var (&var) = " << &var << endl;
         
    cout << "point_var = " << point_var << endl;

    cout << "content of the address pointed to by point_var (*point_var) = " <<  *point_var << endl;

    return 0;
}