#include <iostream>
#include <string>

int getNumber() {
    int num;
    std::cout << "Enter a number between 0 and 255: ";
    std::cin >> num;

    if (num < 0  || num > 255) return 0;

    return num;
}

std::string convertTo(int num) {
    if (num == 0) return "0";

    std::string binary{};

    binary += (num / 128) % 2 == 0 ? "0" : "1";
    binary += (num / 64) % 2 == 0 ? "0" : "1";
    binary += (num / 32) % 2 == 0 ? "0" : "1";
    binary += (num / 16) % 2 == 0 ? "0" : "1";
    binary += " ";
    binary += (num / 8) % 2 == 0 ? "0" : "1";
    binary += (num / 4) % 2 == 0 ? "0" : "1";
    binary += (num / 2) % 2 == 0 ? "0" : "1";
    binary += (num / 1) % 2 == 0 ? "0" : "1";

    return binary;
}

int main() {
    int num = getNumber();
    std::string ans = convertTo(num);

    std::cout << ans << "\n";

    return 0;
}