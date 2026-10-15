// Type Casting: It is the technique used to perform explicit conversion using cast syntax.

#include <iostream>
using namespace std;

int main()
{
    double x = 9.7; // x has a datatype of double
    int y = int(x); // y has int and x is also converted to int manually
    cout << "Y has a value of: " << y << '\n';

    double a = 8.5;              // a has a datatype of double
    int b = static_cast<int>(a); // converted using static cast syntax
    cout << "Original value: " << a << "\n";
    cout << "Value after the change: " << b;
    return 0;
}

/*
C-Style:--> int(x)
C++-Style:--> static_cast<int>(x)
*/