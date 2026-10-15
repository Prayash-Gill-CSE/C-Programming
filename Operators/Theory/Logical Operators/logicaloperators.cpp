// Logical operators: These operators create a logic between two things and return the true and false or the 0 and 1.

#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 20;
    int c = 10;
    int d = 20;
    bool e = true;
    cout << ((a == c) && (b == d)) << "\n"; //&& And operator
    cout << ((a == c) || (a == b)) << "\n"; //|| Or operator
    cout << (!e) << "\n";                   // Not operator
    return 0;
}

/*

AND &&  True if both conditions true.
OR || True if one condition is true.
NOT ! Reverse the condition, if true then false.

TRUTH TABLE of AND:
1. True    True        True
2. False   True        False
3. True    False       False
4. False   False       False

TRUTH TABLE of OR:
1. True    True        True
2. False   True        True
3. True    False       True
4. False   False       False


*/