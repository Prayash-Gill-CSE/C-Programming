//These are the set of if and else statements.

#include <iostream>
using namespace std;

int main()
{
    int marks = 20;                //initialization
    if (marks >= 90)              //if marks>=90 then this statement will run
    {
        cout << "Grade A";
    }
    else if (marks >= 75)             //if marks>=75 then this statement will run
    {
        cout << "Grade B";
    }
    else                                 //if all the statement will be false then this will run
    {
        cout << "Grade C";
    }
    return 0;
}

/*
An else-if ladder checks the multiple conditions one after another, running the block for the first true condition.
A chain of otherwise, check this next checks.
*/