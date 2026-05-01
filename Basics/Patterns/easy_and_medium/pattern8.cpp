#include <iostream>
using namespace std;

// Given an integer n. You need to recreate the pattern given below for any value of N.
// Let's say for N = 5, the pattern should look like as below:
/*
        *********
         *******
          *****
           ***
            *
*/

void pattern(int n) {
    for (int i = n; i >= 1; i--) {
        // prints spaces in each line before '*':
        // formula: n - i
        // proof (i = 5): 5 - 5 = 0 spaces in first line, then 1, 2, 3...
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        // prints '*'s after determining # of spaces in each line:
        // formula: 2 * i - 1
        // proof (i = 5): 2 * 5 - 1 = 9 star in first line, then 7, 5, 3...
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "*";
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