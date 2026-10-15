// Identifier is a name given by the programmer to understand the name for the variable, function, classes etc.

#include <iostream>
using namespace std;

int main()
{
    int age; // here int is the keyword, age is the identifier and the value of age is literal.
    cout << "Enter your age: ";
    cin >> age;
    cout << "This is your age entered by you: " << age;
    return 0;
}

/*
RULES FOR THE IDENTIFIER
1. Can start with any alphabet, underscore, dollar and can be end with the number.
2. No space is allowed.
3. Camel case: firstNum.
4. Snake case: first_num.
5. Keyword is not allowed.
*/