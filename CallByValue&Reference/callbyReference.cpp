#include <iostream>
using namespace std;

void swap(int *x, int *y)
{
    int swap;
    swap = *x;
    *x = *y;
    *y = swap;
}

int main()
{
    int x = 100, y = 200;
    swap(&x, &y);
    cout << "Value of x: " << x << " and Value of y: " << y;
    return 0;
}