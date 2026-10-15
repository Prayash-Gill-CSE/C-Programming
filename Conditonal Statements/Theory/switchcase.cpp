// These are the set of statement in which we pass the value of the that one then the statement will run.

#include <iostream>
using namespace std;

int main()
{
    int day = 2; // initialization
    switch (day)
    { // switch keyword is used for this
    case 1:
        cout << "Monday";
        break; // these are the different cases of this
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thrusday";
        break;
    default:
        cout << "Invalid";
    }
    return 0;
}

/*
The switch statement compares one variable against several fixed values, running the matching cases.
A cleaner alternative to a long else-if ladder when checking a single value.
*/