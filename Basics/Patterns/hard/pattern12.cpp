#include <iostream>
using namespace std;

// Given an integer n. You need to recreate the pattern given below for any value of N.
// Let's say for N = 5, the pattern should look like as below:
/*
       1        1
       12      21
       123    321
       1234  4321
       1234554321
*/

void pattern(int n) {
    for (int i = 1; i <= n; i++) {
        // prints (left side) numbers
        for (int j = 1; j <= i; j++) {
            cout << j;
        }

        // prints spaces in between
        // formula: 2 * n - 2 * i
        // 1st iteration proof ( i = 1, n = 5): 2 * 5 - 2 * 1 = 8 spaces in first line, then 6, 4, 2...
        for (int j = 1; j <= (2 * n - 2 * i); j++) {
            cout << " ";
        }

        // prints (right side) numbers
        for (int j = i; j >= 1; j--) {
            cout << j;
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