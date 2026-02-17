#include <iostream>
using namespace std;

int main() {

    int number[] = {1,2,3,4,5,6,7};

    cout << "First element: " << number[0] << endl;
    cout << "Last element: " << number[6] << endl;

    number[2] = 10;
    cout << "Modified array: ";
    
    for (int i = 0; i < 7; i++) {
        cout << number[i] << " ";
    }
    cout << endl;
    return 0;
}