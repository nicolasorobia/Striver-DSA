#include <iostream>

int findGCD(int n1, int n2) {

    // Euclidean Algorithm - Find Greatest Common Divisor
    //
    // Core idea: gcd(n2, n1) = gcd(n1, n2 % n1)
    // Keep replacing (n2, n1) with (n1, remainder) until remainder = 0
    // The last non-zero value of n1 before it becomes 0 is the GCD
    //
    // Division algorithm format: n2 = n1 * q + r
    //   q = n2 / n1  (quotient — how many times n1 fits into n2)
    //   r = n2 % n1  (remainder — what's left over)
    //
    // Example: gcd(45, 10)
    // Step 1: 45 = 10 * 4 + 5  → remainder = 5, so gcd(45,10) = gcd(10, 5)
    // Step 2: 10 = 5  * 2 + 0  → remainder = 0, so gcd(10, 5) = gcd(5,  0)
    // Step 3: n1 = 0 → stop, return n2 = 5 ✅

    while (n1 != 0) {
        int remainder = n2 % n1;  // r = n2 % n1 (what's left after division)
        n2 = n1;                  // old divisor becomes new dividend
        n1 = remainder;           // remainder becomes new divisor
    }

    return n2;  // last non-zero n1 before loop ended — this is the GCD
}

int main() {

    int n1 = 9, n2 = 12;
    int ans = findGCD(n1, n2);
    std::cout << "Greatest common factor (GCD): " << ans << std::endl;

}