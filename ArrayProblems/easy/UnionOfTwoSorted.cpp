#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> unionArray(std::vector<int>& nums1, std::vector<int>& nums2) {
    nums1.insert(nums1.end(), nums2.begin(), nums2.end());

    std::sort(nums1.begin(), nums1.end());

    auto newEnd = std::unique(nums1.begin(), nums1.end());

    // erase all duplicates in nums starting from newEnd pointer to end of vector
    nums1.erase(newEnd, nums1.end());

    return nums1;
}

int main() {

    std::vector<int> nums1 = {1, 2, 3, 4, 5};
    std::vector<int> nums2 = {1, 3, 6, 7};

    nums1 = unionArray(nums1, nums2);

    for (auto i : nums1) {
        std::cout << i << " ";
    }

    return 0;
}