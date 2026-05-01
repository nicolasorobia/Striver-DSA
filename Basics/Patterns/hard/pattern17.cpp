#include <iostream>
using namespace std;

// Given an integer n. You need to recreate the pattern given below for any value of N.
// Let's say for N = 5, the pattern should look like as below:
/*
        A
       ABA
      ABCBA
     ABCDCBA
    ABCDEDCBA
*/

void pattern(int n) {
    for (int i = 1; i <= n; i++) {
        // print spaces
        for (int j = 1; j <= (n - i); j++) {
            cout << " ";
        }

        // prints left side letters
        for (int j = 1; j <= i; j++) {
            cout << static_cast<char>('A' + (j - 1));
        }

        // print right side letters
        for (int j = 1; j < i; j++) {
            cout << static_cast<char>('A' + (i - j - 1));
        }

        // go to new line
        cout << "\n";
    }
}

int main() {
    int n = 5;
    pattern(n);

    return 0;
}