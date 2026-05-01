#include <iostream>
using namespace std;

// Given an integer n. You need to recreate the pattern given below for any value of N.
// Let's say for N = 5, the pattern should look like as below:
/*
       1 
       2 3 
       4 5 6 
       7 8 9 10 
       11 12 13 14 15
*/

void pattern(int n) {
    int count = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << count;
            if (j < i) cout << " "; // only print space if not the last number
            count++;
        }

        cout << "\n";
    }
}

int main() {
    int n = 5;
    pattern(n);

    return 0;
}