#include <iostream>
using namespace std;

int sum_of_digits(int n) {

    if (n == 0) return 0; // base case

    return (n % 10) + sum_of_digits(n / 10);
}

int main() {

    int ans = sum_of_digits(1234); // expected output: 10
    cout << ans << endl;


    return 0;
}