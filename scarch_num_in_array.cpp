#include <iostream>
using namespace std;

int main(){
    int numbers[] = {1, 2, 3, 4, 5};
    int search;
    cout << "Enter the number to search: ";
    cin >> search;
    for (int i = 0; i < 5; i++) {
        if (numbers[i] == search) {
            cout << "The number " << search << " is found at index " << i << endl;
            return 0;
        }
    }
    cout << "The number " << search << " is not found in the array." << endl;
    return 0;
}