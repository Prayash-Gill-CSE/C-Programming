// This let you to run a statement many times.

#include <iostream>
using namespace std;

int main()
{
    int i = 0; // initialization
    do
    { // loop
        cout << i;
        i++;
    } while (i < 5);
    return 0;
}

/*
A do-while loop runs the code block first, then checks the conditions guarnteeing atleast one run.
Do it once no matter what, then keep checking.
*/