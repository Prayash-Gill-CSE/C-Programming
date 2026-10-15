// Nested if means the if statement is used inside the if.

#include <iostream>
using namespace std;

int main()
{
    int age = 18;  // initialization
    int hasId = 1; // initialization
    if (age >= 18)
    { // first if statement
        if (hasId)
        {                             // second if statement
            cout << "Entry allowed."; // statement if the result comes true
        }
    }
    return 0;
}

/*
A nested if is an if statement plced inside another if statement.
A condition checked only after another condition is already true.
*/