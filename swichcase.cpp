#include <iostream>
using namespace std;

int main() 
{
    char input = 'B';

    switch (input) {
        case 'A':
            cout << "A." << endl;
            break;
        case 'B':
            cout << "B." << endl;
            break;

        default:
            cout << "Invalid input" << endl;
           
    }
    return 0;
}