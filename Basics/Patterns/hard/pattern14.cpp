#include <iostream>
using namespace std;

// Given an integer n. You need to recreate the pattern given below for any value of N.
// Let's say for N = 5, the pattern should look like as below:
/*
      A
      AB
      ABC
      ABCD
      ABCDE
*/

void pattern(int n) {
    for (int i = 1; i <= n; i++) {
        // char current_letter = 'A';
        for (int j = 1; j <= i; j++) {
            cout << static_cast<char>('A' + (j - 1));
            // current_letter++;
        }

        cout << "\n";
    }
}

int main() {
    int n = 5;
    pattern(n);

    return 0;
}