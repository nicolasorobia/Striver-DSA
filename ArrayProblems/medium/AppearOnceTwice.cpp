#include <iostream>
#include <vector>

int singleNumber(std::vector<int>& nums) {
    // use XOR logic to isolate element that occurs once
    int xorr = 0;
    
    int n = nums.size();
    for (int i = 0; i < n; i++) {
        xorr = xorr ^ nums[i];
    }

    if (xorr == 0) return -1;

    return xorr;
}

int main() {

    std::vector<int> nums1 = {1, 3, 10, 3, 5, 1, 5};
    std::vector<int> nums2 = {1, 3, 10, 3, 5, 1, 5, 10};

    std::cout << singleNumber(nums1) << "\n";
    std::cout << singleNumber(nums2) << "\n";


    return  0;
}