// This is a shortcut step for the if and else statements in a single line.

#include <iostream>
using namespace std;

int main()
{
    int age = 67;                                    // initialization
    string result = (age >= 18) ? "Adult" : "Minor"; // statements
    cout << result;                                  // output
    return 0;
}

/*
It is a one line shortcut for a simple if else statement.
Squeezes an if else into a single expression.
*/