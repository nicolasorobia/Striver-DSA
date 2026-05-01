#include <iostream>
using namespace std;

// Given an integer n. You need to recreate the pattern given below for any value of N.
// Let's say for N = 5, the pattern should look like as below:
/*
    1
    22
    333
    4444
    55555
*/

void pattern(int n) {
    int current_num = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << current_num;
        }
        current_num++;
        cout << "\n";
    }
}

int main() {
    int n = 5;
    pattern(n);

    return 0;
}