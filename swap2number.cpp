#include <iostream>
using namespace std;

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int x = 500, y =100;
    swap(&x, &y);
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    return 0;
}