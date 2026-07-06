#include <iostream>
#include <vector>
#include <algorithm>

void moveZeroes(std::vector<int>& nums) {
    int count = 0;
    int n = nums.size();

    for (int i = 0; i < n; i++) {
        if (nums[i] != 0) {
            std::swap(nums[i], nums[count]);
            count++;
        }
    }
}

int main() {

    std::vector<int> nums = {0, 1, 4, 0, 5, 2};

    moveZeroes(nums);

    for (auto num: nums) {
        std::cout << num << " ";
    }

    return 0;
}