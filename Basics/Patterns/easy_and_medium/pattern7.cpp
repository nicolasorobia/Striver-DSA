#include <iostream>
using namespace std;

// Given an integer n. You need to recreate the pattern given below for any value of N.
// Let's say for N = 5, the pattern should look like as below:
/*
         *
        ***
       *****
      *******
     *********
*/

void pattern(int n) {
    for (int i = 1; i <= n; i++) {
        // prints spaces in each line before '*':
        // formula: n - i
        // 1st iteration proof (i = 1): 5 - 1 = 4 spaces in first line, then 3, 2, 1...
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        // prints '*'s after determining # of spaces in each line:
        // formula: 2 * i - 1
        // 1st iteration proof (i = 1): 2 * 1 - 1 = 1 star in first line, then 3, 5, 7...
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