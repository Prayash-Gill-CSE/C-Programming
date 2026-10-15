//Keywords are those words which have a specific meaning in the programming language like int, cout , if etc.

#include <iostream>
using namespace std;

int main()
{
    int a;                                                      //int is a keyword as well as datatype
    a = 10;
    if (a > 20)                                      //if is a keyword which checks the condition and returns the boolean datatype(True/False)
    {

        cout << "This is the value of the a: " << a << "\n";
    }
    else
    {
        cout << "Invalid status";
    }
    return 0;
}