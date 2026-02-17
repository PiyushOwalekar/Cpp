#include <iostream>
using namespace std;

int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int largest = a[0];
    for (int i = 1; i < 10; i++)
    {
        if (a[i] > largest)
        {
            largest = a[i];
        }
    }
    cout << "The largest element in the array is: " << largest << endl;
    return 0;
}   