#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0) return 1; // base case, logic: 0! = 1

    return n * factorial(n - 1);

}

int main() {

    int N {};
    cout << "Enter amount for N: ";
    cin >> N;

    int ans = factorial(N);
    cout << ans << endl;


    return 0;
}