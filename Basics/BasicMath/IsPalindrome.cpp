#include <iostream>
#include <climits>
using namespace std;

bool isPalindrome(int n) {
    if (n < 0) return false;  // negative numbers are never palindromes

    long long reversed = 0;
    int temp = n;

    while (temp != 0) {
        int digit = temp % 10;
        reversed = reversed * 10 + digit;
        temp /= 10;
    }

    if (reversed > INT_MAX || reversed < INT_MIN) return false;
    return n == static_cast<int>(reversed);
}

int main() {
    int n  = 121;
    int n2 = 345;

    cout << n  << (isPalindrome(n)  ? " is" : " is not") << " a Palindrome\n";
    cout << n2 << (isPalindrome(n2) ? " is" : " is not") << " a Palindrome\n";

    return 0;
}