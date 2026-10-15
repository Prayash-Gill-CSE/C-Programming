// These are some escape sequences which can't be used in the simple double quotes to print them.

#include <iostream>
using namespace std;

int main()
{
    cout << "This is the first code which is Hello World." << "\n";                       //\n for the new line
    cout << "\t" << "This is the first code which is Hello World." << "\n";               //\t for the one tab space or 4 spaces
    cout << "This is the first " << "\\" << " code which is Hello World." << "\n";        //\\ for the backslash
    cout << "This is the first code which is " << "\"" << "Hello World." << "\"" << "\n"; //\" for the double quotes
    cout << "This is the first code which is " << "\'" << "Hello World." << "\'" << "\n"; //\' for the single quote
    return 0;
}

/*
if we want to use the double or single quote(s) without these sequences we can't do this in the simple cout statement.
*/