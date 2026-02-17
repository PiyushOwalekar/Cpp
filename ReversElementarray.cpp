#include <iostream>
using namespace std;

int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "The array in reverse order is: ";
    for (int i = 9; i >= 0; i--)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}