#include <iostream>
using namespace std;

// Given an integer n. You need to recreate the pattern given below for any value of N.
// Let's say for N = 5, the pattern should look like as below:
/*
        *
        **
        ***
        ****
        *****
        ****
        ***
        **
        *
*/

void topHalf(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << "\n";
    }
}

void bottomHalf(int n) {
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << "\n";
    }
}

void pattern(int n) {
   topHalf(n);
   bottomHalf(n);
}

int main() {
    int n = 5;
    pattern(n);

    return 0;
}