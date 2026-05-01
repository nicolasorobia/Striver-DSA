#include <iostream>
using namespace std;

// Given an integer n. You need to recreate the pattern given below for any value of N.
// Let's say for N = 5, the pattern should look like as below:
/*
        1 
        0 1 
        1 0 1 
        0 1 0 1 
        1 0 1 0 1
*/

void pattern(int n) {
    for (int i = 1; i <= n; i++) {
        int k = 1;
        if ( i % 2 == 0) {
            k = 0;
        }
        for (int j = 1; j <= i; j++) {
            cout << k;
            if (j < i) cout << " "; // only print space if not the last number
            k = 1 - k; // toggle between 1 and 0;
        }
        cout << "\n";
    }
}

int main() {
    int n = 5;
    pattern(n);

    return 0;
}