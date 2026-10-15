// Relational operators simply relate the both side and return in the form of ture/false or 0/1.

#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 20;

    cout << "Equal to: " << (a == b) << "\n";                 // equal to
    cout << "Not Equal to: " << (a != b) << "\n";             // not equal to
    cout << "Greater than: " << (a > b) << "\n";              // greater than
    cout << "Less than: " << (a < b) << "\n";                 // less than
    cout << "Greater than or equal to: " << (a >= b) << "\n"; // greater than or equal to
    cout << "Less than or equal to: " << (a <= b) << "\n";    // less than or equal to
    return 0;
}