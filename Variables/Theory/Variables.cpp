// A labelled box that holds value.

#include <iostream>
using namespace std;

int hello()
{
    int firstnum;
    firstnum = 10;
    firstnum = 20;
    cout << "The value of the first number: " << firstnum;
    return 0;
}
int main()
{
    int firstnum = 12;
    cout << "Our first number is: " << firstnum <<"\n";
    hello();
    return 0;
}

/*
1. Must be declared with the datatype before use.
2. Its value can change during the program execution.
3. Every variable needs a unique name.
*/

/*
                    SYNTAX
                    datatype variablename = value;

                    int firstnum;         #variable declaration
                    firstnum=10;          #variable inilization
                    firstnum=20;          #variable re-inilization
*/
