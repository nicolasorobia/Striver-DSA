#include <iostream>
#include <string>
using namespace std;

bool palindromeCheck(string& s) {
    int p1 = 0;
    int p2 = s.size() - 1;

    while (p1 < p2) {
        if(s[p1] != s[p2]) return false;
        p1++;
        p2--;
    }

    return true;
}

bool recursivePalindromeCheck(string& s, int start, int end) {

    if (start >= end) return true;

    if (s[start] != s[end]) return false;

    return recursivePalindromeCheck(s, start + 1, end - 1);
}

bool leetcodePalindromeCheck(string s) {
    string valid_s = "";

    // convert string by making all letters lowercase & removing non-alphanumeric characters:
    // test case example: "A man, a plan, a canal: Panama"
    for (auto c: s) {
        if (isalnum(c)) valid_s += tolower(c);
    }

    return palindromeCheck(valid_s);
}

int main() {

    string s1 = "hannah"; // expected: true
    string s2 = "bandit"; // expected: false
    string s3 = "aAaA";   // expected: false

    string s4 = "A man, a plan, a canal: Panama";

    cout << boolalpha;
    cout << palindromeCheck(s1) << endl;
    cout << palindromeCheck(s2) << endl;
    cout << palindromeCheck(s3) << endl;
    
    cout << "\nChecks Palindrome with recursion:\n";
    cout << recursivePalindromeCheck(s1, 0, s1.size() - 1) << endl; // true
    cout << recursivePalindromeCheck(s2, 0, s3.size() - 1) << endl; // false
    cout << recursivePalindromeCheck(s3, 0, s3.size() - 1) << endl; // false

    cout << "\nLeetcode Test case sample:\n";
    cout << leetcodePalindromeCheck(s4) << endl;


    return 0;
}