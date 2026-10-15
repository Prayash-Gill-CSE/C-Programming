// #Asks the compiler that how much space(in bytes) it takes.

#include <iostream>
using namespace std;

int main()
{

    int a = 20;
    int b = sizeof(int);
    cout << b;

    return 0;
}

/*
It gives us the space used by that datatype in bytes.
                        SYNTAX
                        sizeof(datatype);
*/

