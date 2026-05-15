#include <ios>
#include <iostream>
#include <cmath>

// An Amrstrong number is a number that is equal to the sum of its own digits 
// each raised to the power of the number of digits.
bool isArmstrong(int n) {
    // find how many digits n has
    int pow_num = static_cast<int>(log10(n) + 1);

    // sum up each digit of n raised to number of digits it has
    int temp = n;
    int sum = 0;
    while (temp != 0) {
        int last_digit = temp % 10;
        sum += pow(last_digit, pow_num);
        temp /= 10;
    }

    return sum == n;
}

int main() {

    int n = 153;
    std::cout << std::boolalpha;
    std::cout << isArmstrong(n);


    return 0;
}