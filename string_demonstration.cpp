#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1, str2;

    cout << "Enter the first string: ";
    getline(cin, str1);

    cout << "length of strig1: " << str1.length() << endl;

    str2 = str1; 
    cout << "Copied string: " << str2 << endl;

    return 0;
}