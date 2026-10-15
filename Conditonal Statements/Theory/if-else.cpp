// If-Else statement runs one block if the condition is true, and a different block if it's flase.

#include <iostream>
using namespace std;

int main()
{
    int age = 19; // variable initialize
    if (age <= 18)
    {
        cout << "Not able to vote now wait! till the 18 or 18+."; // runs if the statement is true
    }
    else
    {
        cout << "You are able to vote for the future party."; // otherwise this statement is executed
    }
    return 0;
}

/*
In the if-else condition let the else statement will run always if the if statment beocomes false.
If you enter the different values in the age and undefined also then also the else statement run.
*/