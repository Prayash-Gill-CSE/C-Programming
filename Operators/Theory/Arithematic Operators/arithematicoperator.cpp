//For the Arithematic operations we need atleast two operands.

#include <iostream>
using namespace std;

int main()
{
    int a = 100;
    int b = 20;

    cout << "Addition: " << (a + b) << "\n";           // addition
    cout << "Substraction: " << (a - b) << "\n";       // substraction
    cout << "Multiplication: " << (a * b) << "\n";     // multiplication
    cout << "Division: " << (a / b) << "\n";           // division
    cout << "Modulus(Remainder): " << (a % b) << "\n"; // modulus
    cout << "Increment: " << (a++) << "\n";            // increment post
    cout << "Increment: " << (++a) << "\n";            // increment pre
    cout << "Decrement: " << (a--) << "\n";            // decrement post
    cout << "Decrement: " << (--a) << "\n";            // decrement pre
    return 0;
}