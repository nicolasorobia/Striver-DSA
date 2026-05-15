#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int n = -1234;
    long long ans = 0;

    while (n != 0) {
        int digit = n % 10;
        ans = ans * 10 + digit;
        n /= 10;

        if (ans > INT_MAX || ans < INT_MIN) {
            return 0;
        }
    }

    cout << "Reversed of n: " << static_cast<int>(ans) << endl;

    return  0;
}