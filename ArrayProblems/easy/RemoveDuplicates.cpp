#include <iostream>
#include <vector>
#include <algorithm>

int removeDuplicates(std::vector<int>& nums) {
    // push all duplicate elements to end and point the start of it to newEnd
    auto newEnd = std::unique(nums.begin(), nums.end());

    // erase all duplicates in nums starting from newEnd pointer to end of vector
    nums.erase(newEnd, nums.end());

    // get new size of nums without duplicates
    int n = nums.size();

    return n;
}


int main() {

    std::vector<int> nums = {0, 0, 3, 3, 5, 6};
    std::vector<int> nums2 = {2, 4, 4, 4, 4, 5, 5};

    std::cout << removeDuplicates(nums) << "\n";  // 4
    std::cout << removeDuplicates(nums2) << "\n"; // 3

    return  0;
}