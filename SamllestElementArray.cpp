#include <iostream>
using namespace std;

int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int smallest = a[0];
    for (int i = 1; i < 10; i++)
    {
        if (a[i] < smallest)
        {
            smallest = a[i];
        }
    }
    cout << "The smallest element in the array is: " << smallest << endl;
    return 0;
}   