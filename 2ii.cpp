#include <iostream>
using namespace std;

void valueSwap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;

    cout << "Inside Call by Value: ";
    cout << "a = " << a << ", b = " << b << endl;
}

void referenceSwap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
 
    cout << "Inside Call by Reference: ";
    cout << "a = " << a << ", b = " << b << endl;
}

int main()
{
    int x = 10, y = 20;

    cout << "Before Call by Value: ";
    cout << "x = " << x << ", y = " << y << endl;

    valueSwap(x, y);

    cout << "After Call by Value: ";
    cout << "x = " << x << ", y = " << y << endl;

    cout << endl;

    cout << "Before Call by Reference: ";
    cout << "x = " << x << ", y = " << y << endl;

    referenceSwap(x, y);

    cout << "After Call by Reference: ";
    cout << "x = " << x << ", y = " << y << endl;

    return 0;
}
