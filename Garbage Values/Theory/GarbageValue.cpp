// #A unpredictable value that is not initialized to the variable.

#include <iostream>
using namespace std;

int main()
{
      int num; // only declared the variable
      cout << num;
      return 0;
}

/*
1. The value is left over data from memory -not zero, not predictable.
2. Always initialize variables to aviod this.
*/