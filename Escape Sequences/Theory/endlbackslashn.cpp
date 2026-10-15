// These are the escape sequences to add the new lines for the different purposes.

#include <iostream>
using namespace std;

int main()
{
    cout << "This is the hello world.";         // next line start continously
    cout << "This is the hello world." << endl; // next line is started in the next line
    cout << "This is the hello world.";         // next line continously
    cout << "This is the hello world." << "\n"; // next line is started in the next line
    cout << "This is the hello world.";
    return 0;
}

/*
There are two mainly types of escape sequences:
1. endl: add new line and flushes the buffer and it is slower in nature.
2. \n: add new line only do not flush the buffer and it is more faster than the endl.
*/