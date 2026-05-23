#include <iostream>
using namespace std;

int main() {

    // Convert total cents input by user to dollars, quarters, dimes, nickels & pennies
    int dollars {}, quarters {}, dimes {}, nickels {}, pennies {};

    cout << "Enter an amount in cents: ";
    int total_cents {};
    cin >> total_cents;

    dollars = total_cents / 100;                //  ex. 92 / 100 = 0
    int rem = total_cents % 100;                //  92 - 0 = 92 cents remaning

    quarters = rem / 25;                        //  92 / 25 = 3
    rem %= 25;                                  //  92 - (3 * 25) = 92 - 75 = 17

    dimes = rem / 10;                           //  17 / 10 = 1
    rem %= 10;                                  //  17 - 10 = 7

    nickels = rem / 5;                          //  7 / 5 = 1

    pennies = rem % 5;                          //  7 - 5 = 2

    cout << "\n***** YOU CAN PROVIDE CHANGE FOR THIS AS FOLLOWS *****\n";
    cout << "dollars: " << dollars << endl;
    cout << "quarters: " << quarters << endl;
    cout << "dimes: " << dimes << endl;
    cout << "nickels: " << nickels << endl;
    cout << "pennies: " << pennies << endl;

    return 0;
}