#include <iostream>
using namespace std;

// Given an integer n. You need to recreate the pattern given below for any value of N.
// Let's say for N = 5, the pattern should look like as below:
/*
     A
     BB
     CCC
     DDDD
     EEEEE
*/

// If you can compute something from what you already have, don't track it separately. 
// It's one less thing that can go wrong.
void pattern(int n) {
    // char current_letter {'A'};
    for (int i = 1; i <= n; i++) {
        char current_letter = 'A' + (i - 1);
        for (int j = 1; j <= i; j++) {
            cout << current_letter;
        }
        cout << "\n";
    }
}

int main() {
    int n = 5;
    pattern(n);

    return 0;
}