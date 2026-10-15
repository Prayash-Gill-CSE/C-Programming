// #The compiler quietly does the conversion for you.

#include <iostream>
using namespace std;

int main()
{
    int a = 5;   // a has the datatype of integer
    float b = a; // a is converted into the float automatically
    cout << b;
    return 0;
}

/*
Implicit conversion converts the datatype automatically without asking the user.
It is a widening conversion.
*/