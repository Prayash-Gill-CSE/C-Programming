#include <iostream>
using namespace std;

int main()
{ /*cout of the first is used to the value of money
     cout second one is used to the value of the rate of interest
     cout third is used to the value of the time interval.*/

    cout << "Enter the value of the money: "; // for the value of the money
    int P;
    cin >> P;

    cout << "Enter the rate of interest: "; // for the value of the rate of interest
    int R;
    cin >> R;

    cout << "Enter the time interval: "; // for the value of the time interval
    int T;
    cin >> T;
    int simpleinterest = (P * R * T) / 100;                 //for the totalvalue of the money.
    cout << "The value of the Simple Interest: " << simpleinterest << "\n";
    int totalmoney=(simpleinterest+P);
    cout <<"Your Total moeny is: " <<totalmoney << "\n";
    return 0;
}