#include <iostream>
using namespace std;

int fib_recursion(int n) {
    // base cases
    if (n == 0) return 0;
    if (n == 1) return 1;

    return fib_recursion(n - 1) + fib_recursion(n - 2);
}

int fib(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    int last_digit = 0, digit = 1, ans = 0;

    for (int i = 2; i <= n; i++) {
        ans = digit + last_digit;
        last_digit = digit;
        digit = ans;
    }

    return ans;
}

int main() {

    int N {};
    cout << "Enter amount for N: ";
    cin >> N;

    int ans = fib_recursion(N);
    cout << "The Fibonacci number at position " << N << " using recursion is: ";
    cout << ans << endl;

    int another_ans = fib(N);
    cout << "The Fibonacci number at position " << N << " using standard method is: ";
    cout << another_ans << endl;



    return 0;
}