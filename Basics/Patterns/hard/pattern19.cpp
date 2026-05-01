#include <iostream>
using namespace std;

// Given an integer n. You need to recreate the pattern given below for any value of N.
// Let's say for N = 5, the pattern should look like as below:
/*
    **********
    ****  ****
    ***    ***
    **      **
    *        *
    *        *
    **      **
    ***    ***
    ****  ****
    **********
*/

void printRows(int n, int i) {
    // print left side *'s
    for (int j = 1; j <= i; j++) {
        cout << "*";
    }

    // print spaces in between
    // formula: 2 * n - 2 * i
    for (int j = 1; j <= (2 * n - 2 * i); j++) {
        cout << " ";
    }

    // print right side *'s
    for (int j = 1; j <= i; j++) {
        cout << "*";
    }
}

void topHalf(int n) {
    for (int i = n; i >= 1; i--) {
        printRows(n, i);
        cout << "\n";
    }
}

void bottomHalf(int n) {
    for (int i = 1; i <= n; i++) {
        printRows(n, i);
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