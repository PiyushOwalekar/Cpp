//check whether given aplabet is ovel or consonent
#include <iostream>
using namespace std;    

int main() 
{
    char input;
    cout<<"Enter an alphabet: ";
    cin>>input;
    switch (input) {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout << input << " is a vowel." << endl;
            break;
        default:
            cout << input << " is a consonant." << endl;
           
    }
    return 0;
}