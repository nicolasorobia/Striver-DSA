#include <iostream>
using namespace std;

// Given an integer n. You need to recreate the pattern given below for any value of N.
// Let's say for N = 5, the pattern should look like as below:
/*
    *****
    *   *
    *   *
    *   *
    *****
*/

void pattern(int n) {
    for (int i = 1; i <= n; i++) {
        // print *'s in each row 
        for (int j = 1; j <= n; j++) {
            if (i < n && i > 1 && j < n && j > 1) cout << " ";
            else cout << "*"; 
        }
        cout << "\n";
    }
}

int main() {
    int n = 5;
    pattern(n);

    return 0;
}