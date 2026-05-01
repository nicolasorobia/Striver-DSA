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
      *********
       *******
        *****
         ***
          *
*/

void topHalf(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        for (int j = 1; j <= (2 * i - 1); j++) {
            cout <<  "*";
        }

        cout << "\n";
    }
}

void bottomHalf(int n) {
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        for (int j = 1; j <= (2 * i - 1); j++) {
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