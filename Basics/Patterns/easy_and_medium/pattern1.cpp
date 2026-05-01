#include <iostream>
using namespace std;

// Given an integer n. You need to recreate the pattern given below for any value of N.
// Let's say for N = 5, the pattern should look like as below:
/*
    *****
    *****
    *****
    *****
    *****
*/

void pattern(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << "*";
        }
        cout << "\n";
    }
}

int main() {
    int n = 4;
    pattern(n);

    return 0;
}