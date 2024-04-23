#include <iostream>
using namespace std;

int main()
{

    // Swap Two Variable Using Third Variable-------------------

    int a = 10;
    int b = 20;
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << a << endl;
    cout << b << endl;

    // Swap Two Variable WithOut Using Third Variable----------------

    a = a - b;
    b = a + b;
    a = b - a;

    cout << a << endl;
    cout << b << endl;
}