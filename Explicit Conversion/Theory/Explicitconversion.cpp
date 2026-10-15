// Explicit conversion, when we converts a value from one type to another manually.

#include <iostream>
using namespace std;

int main()
{
    double x = 9.7; // x has the datatype of double
    int y = int(x); // y stores the value of x which is converted into the interger
    cout << y;
    return 0;
}

/*
1. We have to tell the compiler exactly what type to convert to.
2. It is a narrowing conversion.

ASCII:-->
           a=97
           A=65
           1=48

*/