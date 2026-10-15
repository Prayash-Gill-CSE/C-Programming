// #A locked box -set once, never changed.

#include <iostream>
using namespace std;

int main()
{
    const int a = 20; // const is used to declare that it is constant.
    cout << "This the value of a: " << a;
    return 0;
}

/*
Declaration and Inilization both at the same time.
If we try to change the value of constant then error comes.
*/