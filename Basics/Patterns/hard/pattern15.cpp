#include <iostream>
using namespace std;

// Given an integer n. You need to recreate the pattern given below for any value of N.
// Let's say for N = 5, the pattern should look like as below:
/*
      ABCDE
      ABCD
      ABC
      AB
      A
*/

void pattern(int n) {
    for (int i = 1; i <= n; i++) {
        
        // for (int j = n; j >= i; j--) {
        //     cout << static_cast<char>('A' + (n - j));
        // }

        for (char ch = 'A'; ch < 'A' + (n - i); ch++) {
            cout << ch;
        }

        cout << "\n";
    }
}

int main() {
    int n = 5;
    pattern(n);

    return 0;
}