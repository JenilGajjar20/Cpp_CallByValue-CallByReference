#include <iostream>
using namespace std;

void change(int data);

int main()
{
    int data = 4;
    change(data);
    cout << "Value of data: " << data;
    return 0;
}

void change(int data)
{
    data = 5;
}