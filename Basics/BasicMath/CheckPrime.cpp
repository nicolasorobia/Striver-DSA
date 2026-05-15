#include <iostream>

bool isPrime(int n) {

    if (n <= 1) {
        return false;
    }

    for(int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}


int main() {

    int n = 2, n2 = 10;

    std::cout<< std::boolalpha;
    std::cout<< "Is " << n  << " a prime number: " << isPrime(n) << "\n";
    std::cout<< "Is " << n2 << " a prime number: " << isPrime(n2) << "\n";

    return 0;
}