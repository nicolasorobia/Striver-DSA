#include <iostream>
using namespace std;

// Given an integer n. You need to recreate the pattern given below for any value of N.
// Let's say for N = 5, the pattern should look like as below:
/*
    E 
    D E 
    C D E 
    B C D E 
    A B C D E
*/

void pattern(int n) {

    // starting character: ('A' + n - 1)
    
    // for (int i = 1; i <= n; i++) {
        
    //     for (int j = 1; j <= i; j++) {
    //         cout << static_cast<char>(('A' + n - 1) - (i - j)) << " ";
    //     }

    //     // go to new line
    //     cout << "\n";
    // }

    // preferred method:
    char start = 'A' + n - 1;
    for (int i = 0; i < n; i++) {
        for (char ch = start - i; ch <= start; ch++) {
            cout << ch << " ";
        }
        cout << "\n";
    }
}

int main() {
    int n = 5;
    pattern(n);

    return 0;
}