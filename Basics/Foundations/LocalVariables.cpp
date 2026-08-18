#include <iostream>


int main()
{
    std::cout << "Enter an integer: ";
    int small_num {};
    std::cin >> small_num;
    std::cout << "Enter a larger integer: ";
    int large_num {};
    std::cin >> large_num;

    {
        int temp {};
        if (large_num < small_num) {
            std::cout << "Swapping the values\n";
            temp = small_num;
            small_num = large_num;
            large_num = temp;
        }
    } // temp goes out of scope and is destroyed here

    std::cout << "The smaller value is " << small_num << "\n";
    std::cout << "The larger value is " << large_num << "\n";

    return 0;
} // small_num and large_num goes out of schope and is destroyed here