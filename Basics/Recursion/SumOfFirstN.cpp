#include <iostream>
using namespace std;

int NnumberSum(int N) {

    // formula for finding sum of first N antural numbers:
    // (N * (N + 1)) / 2

    if (N == 1) return 1; // base case

    // How it works (N = 4):
    // NnumberSum(4)
    // = 4 + NnumberSum(3)
    // = 4 + 3 + NnumberSum(2)
    // = 4 + 3 + 2 + NnumberSum(1)
    // = 4 + 3 + 2 + 1        <- stos here, returns 1
    // = 10 ✅

    return N + NnumberSum(N - 1);
}

int main() {

    int N {};
    cout << "Enter amount for N: ";
    cin >> N;

    int ans = NnumberSum(N);
    cout << ans << endl;


    return 0;
}